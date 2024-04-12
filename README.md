zeekjs-rust-hello-world
=================================

Zeek, Rust, Node and npm must be on $PATH

```
# npm install --save-dev @napi-rs/cli

# cargo build --release  

# cp target/release/libzeekjs_rust_hello_world.{so}/{dylib} target/release/libzeekjs_rust_hello_world.node
```

```
# zeek ./scripts/index.js 
Hello from Rust!
```


