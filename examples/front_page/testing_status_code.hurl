# Testing 200 OK
GET https://example.org/order/435
HTTP/1.1 200


# Testing status code is in a 200-300 range
GET https://example.org/order/435

HTTP/1.1 *
[Asserts]
status >= 200
status < 300

