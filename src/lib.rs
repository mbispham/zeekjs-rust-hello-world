use napi::bindgen_prelude::*;
use napi_derive::napi;

#[napi]
fn hello() -> String {
    "Hello from Rust!".to_string()
}