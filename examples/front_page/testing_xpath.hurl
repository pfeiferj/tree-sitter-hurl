GET https://example.org

HTTP/1.1 200
Content-Type: text/html; charset=UTF-8
[Asserts]
xpath "string(/html/head/title)" contains "Example" # Check title
xpath "count(//p)" == 2                             # Check the number of p
xpath "//p" count == 2                              # Similar assert for p
xpath "boolean(count(//h2))" == false               # Check there is no h2  
xpath "//h2" not exists                             # Similar assert for h2
xpath "string(//div[1])" matches /Hello.*/

