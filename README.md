# PTLURLProtocol

## Description
A helpful wrapper for testing network requests using NSURLProtocol.

PTLURLProtocol is designed to be **very** basic, just a wrapper around boilerplate logic when subclassing NSURLProtocol.  If you want something more advanced you should take a look at [OHHTTPStubs](https://github.com/AliSoftware/OHHTTPStubs).

## Usage
- Subclass PTLURLProtocol

```objc
@interface MyCustomURLProtocol : PTLURLProtocol
@end
```

- Override 3 methods

```objective-c
@implementation MyCustomURLProtocol
+ (BOOL)canInitWithRequest:(NSURLRequest *)request {...}
+ (NSURLResponse *)responseForRequest:(NSURLRequest *)request {...}
+ (NSData *)dataForRequest:(NSURLRequest *)request {...}
@end
```

- Register your custom protocol

```objective-c
[MyCustomURLProtocol registerProtocol];
```
    
- Profit

## License
[MIT](LICENSE.txt)

## Thanks
@mattt for introducing the idea on [NSHipster](http://nshipster.com/nsurlprotocol/).

## Contact
[Brian Partridge](http://brianpartridge.name) - @brianpartridge on [Twitter](http://twitter.com/brianpartridge) and [App.Net](http://alpha.app.net/brianpartridge)
