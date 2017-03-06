
// Exercise 1.4 from The Go Programming Language
// Modify dup2 to print the names of all files
// in which each duplicated line occurs

// Use words.txt and words2.txt to text output
// go run Exercise1-4.go words.txt words2.txt

package main

import (
	"bufio"
	"fmt"
	"os"
)

type dupCount struct {
    count int
    fileCount map[string]int
}

func main() {
	counts := make(map[string]dupCount)
	files := os.Args[1:]
	if len(files) == 0 {
		countLines(os.Stdin, counts, "stdin")
	} else {
		for _, arg := range files {
			f, err := os.Open(arg)
			if err != nil {
				fmt.Fprintf(os.Stderr, "dup2: %v\n", err)
				continue
			}
			countLines(f, counts, arg)
			f.Close()
		}
	}
	for line, n := range counts {
		if n.count > 1 {
			fmt.Printf("%d\t%s\n", n.count, line)
			for file, m := range n.fileCount {
				if m > 0 {
					fmt.Printf("\t%s\t- %d occurence(s)\n", file, m)
				}
			}
		}
	}
}

func countLines(f *os.File, counts map[string]dupCount, filename string) {
	input := bufio.NewScanner(f)
	for input.Scan() {
                var tmp = counts[input.Text()]
		if tmp.count == 0 {
			tmp.fileCount = make(map[string]int)
		}
                tmp.count++
                tmp.fileCount[filename]++
		counts[input.Text()] = tmp
	}
	// NOTE: ignoring potential errors from input.Err()
}
