// Copyright © 2016 Alan A. A. Donovan & Brian W. Kernighan.
// License: https://creativecommons.org/licenses/by-nc-sa/4.0/
// See page 16.
// Edited to solve Exercise 1.7 in The Go Programming Language
// by Justin T. Marsh.
//!+

// Fetch prints the content found at each specified URL.

// Exercise 1.7: The function call io.Copy(dst, src) reads from src and
// writes to dst. Use it instead of ioutil.ReadAll to copy the response
// body to oi.Stdout without requiring a buffer large enough to hold the
// entire stream. Be sure to check the error result of io.Copy.

// Exercise 1.8: Modify fetch to add the prefix http:// to each argument
// URL if it is missing. Try using strings.HasPrefix.

package main

import (
	"fmt"
	"io"
	"net/http"
	"os"
	"strings"
	"bytes"
)

// I have added the urlEdit variable to build a new string to send to
// the http.Get function. I've also tested to see if the argument
// provided includes http or https prefixes.

func main() {
	var urlEdit bytes.Buffer

	for _, url := range os.Args[1:] {
		if !strings.HasPrefix(url, "http://") {
			if !strings.HasPrefix(url, "https://") {
				urlEdit.WriteString("http://")
			}
		}
		urlEdit.WriteString(url)
		resp, err := http.Get(urlEdit.String())
		if err != nil {
			fmt.Fprintf(os.Stderr, "fetch: %v\n", err)
			os.Exit(1)
		}
		_, err = io.Copy(os.Stdout, resp.Body)

		resp.Body.Close()
		if err != nil {
			fmt.Fprintf(os.Stderr, "fetch: reading %s: %v\n", url, err)
			os.Exit(1)
		}
	}
}

//!-
