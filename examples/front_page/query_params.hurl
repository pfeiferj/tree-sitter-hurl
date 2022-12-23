# Use query params in the URL:
GET https://example.org/news?order=newest&search=something%20to%20search&count=100


# Or with a query param section:            
GET https://example.org/news
[QueryStringParams]
order: newest
search: something to search
count: 100
