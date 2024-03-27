// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/Appendable.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_STRINGBUILDER_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_STRINGBUILDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang { class StringBuilder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::StringBuilder>
{
	static constexpr fixed_string class_name = "java/lang/StringBuilder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::Appendable, scapix::java_api::java::lang::CharSequence, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_STRINGBUILDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_STRINGBUILDER)
#define SCAPIX_JAVA_API_JAVA_LANG_STRINGBUILDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/StringBuffer.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::StringBuilder : public jni::object_base<"java/lang/StringBuilder",
	java::lang::Object,
	java::lang::Appendable,
	java::lang::CharSequence,
	java::io::Serializable>
{
public:

	static jni::ref<java::lang::StringBuilder> new_object() { return base_::new_object(); }
	static jni::ref<java::lang::StringBuilder> new_object(jint capacity) { return base_::new_object(capacity); }
	static jni::ref<java::lang::StringBuilder> new_object(jni::ref<java::lang::String> str) { return base_::new_object(str); }
	static jni::ref<java::lang::StringBuilder> new_object(jni::ref<java::lang::CharSequence> seq) { return base_::new_object(seq); }
	jni::ref<java::lang::StringBuilder> append(jni::ref<java::lang::Object> obj) { return call_method<"append", jni::ref<java::lang::StringBuilder>>(obj); }
	jni::ref<java::lang::StringBuilder> append(jni::ref<java::lang::String> str) { return call_method<"append", jni::ref<java::lang::StringBuilder>>(str); }
	jni::ref<java::lang::StringBuilder> append(jni::ref<java::lang::StringBuffer> sb) { return call_method<"append", jni::ref<java::lang::StringBuilder>>(sb); }
	jni::ref<java::lang::StringBuilder> append(jni::ref<java::lang::CharSequence> s) { return call_method<"append", jni::ref<java::lang::StringBuilder>>(s); }
	jni::ref<java::lang::StringBuilder> append(jni::ref<java::lang::CharSequence> s, jint start, jint end) { return call_method<"append", jni::ref<java::lang::StringBuilder>>(s, start, end); }
	jni::ref<java::lang::StringBuilder> append(jni::ref<jni::array<jchar>> str) { return call_method<"append", jni::ref<java::lang::StringBuilder>>(str); }
	jni::ref<java::lang::StringBuilder> append(jni::ref<jni::array<jchar>> str, jint offset, jint len) { return call_method<"append", jni::ref<java::lang::StringBuilder>>(str, offset, len); }
	jni::ref<java::lang::StringBuilder> append(jboolean b) { return call_method<"append", jni::ref<java::lang::StringBuilder>>(b); }
	jni::ref<java::lang::StringBuilder> append(jchar c) { return call_method<"append", jni::ref<java::lang::StringBuilder>>(c); }
	jni::ref<java::lang::StringBuilder> append(jint i) { return call_method<"append", jni::ref<java::lang::StringBuilder>>(i); }
	jni::ref<java::lang::StringBuilder> append(jlong lng) { return call_method<"append", jni::ref<java::lang::StringBuilder>>(lng); }
	jni::ref<java::lang::StringBuilder> append(jfloat f) { return call_method<"append", jni::ref<java::lang::StringBuilder>>(f); }
	jni::ref<java::lang::StringBuilder> append(jdouble d) { return call_method<"append", jni::ref<java::lang::StringBuilder>>(d); }
	jni::ref<java::lang::StringBuilder> appendCodePoint(jint codePoint) { return call_method<"appendCodePoint", jni::ref<java::lang::StringBuilder>>(codePoint); }
	jni::ref<java::lang::StringBuilder> delete_(jint start, jint end) { return call_method<"delete", jni::ref<java::lang::StringBuilder>>(start, end); }
	jni::ref<java::lang::StringBuilder> deleteCharAt(jint index) { return call_method<"deleteCharAt", jni::ref<java::lang::StringBuilder>>(index); }
	jni::ref<java::lang::StringBuilder> replace(jint start, jint end, jni::ref<java::lang::String> str) { return call_method<"replace", jni::ref<java::lang::StringBuilder>>(start, end, str); }
	jni::ref<java::lang::StringBuilder> insert(jint index, jni::ref<jni::array<jchar>> str, jint offset, jint len) { return call_method<"insert", jni::ref<java::lang::StringBuilder>>(index, str, offset, len); }
	jni::ref<java::lang::StringBuilder> insert(jint offset, jni::ref<java::lang::Object> obj) { return call_method<"insert", jni::ref<java::lang::StringBuilder>>(offset, obj); }
	jni::ref<java::lang::StringBuilder> insert(jint offset, jni::ref<java::lang::String> str) { return call_method<"insert", jni::ref<java::lang::StringBuilder>>(offset, str); }
	jni::ref<java::lang::StringBuilder> insert(jint offset, jni::ref<jni::array<jchar>> str) { return call_method<"insert", jni::ref<java::lang::StringBuilder>>(offset, str); }
	jni::ref<java::lang::StringBuilder> insert(jint dstOffset, jni::ref<java::lang::CharSequence> s) { return call_method<"insert", jni::ref<java::lang::StringBuilder>>(dstOffset, s); }
	jni::ref<java::lang::StringBuilder> insert(jint dstOffset, jni::ref<java::lang::CharSequence> s, jint start, jint end) { return call_method<"insert", jni::ref<java::lang::StringBuilder>>(dstOffset, s, start, end); }
	jni::ref<java::lang::StringBuilder> insert(jint offset, jboolean b) { return call_method<"insert", jni::ref<java::lang::StringBuilder>>(offset, b); }
	jni::ref<java::lang::StringBuilder> insert(jint offset, jchar c) { return call_method<"insert", jni::ref<java::lang::StringBuilder>>(offset, c); }
	jni::ref<java::lang::StringBuilder> insert(jint offset, jint i) { return call_method<"insert", jni::ref<java::lang::StringBuilder>>(offset, i); }
	jni::ref<java::lang::StringBuilder> insert(jint offset, jlong l) { return call_method<"insert", jni::ref<java::lang::StringBuilder>>(offset, l); }
	jni::ref<java::lang::StringBuilder> insert(jint offset, jfloat f) { return call_method<"insert", jni::ref<java::lang::StringBuilder>>(offset, f); }
	jni::ref<java::lang::StringBuilder> insert(jint offset, jdouble d) { return call_method<"insert", jni::ref<java::lang::StringBuilder>>(offset, d); }
	jint indexOf(jni::ref<java::lang::String> str) { return call_method<"indexOf", jint>(str); }
	jint indexOf(jni::ref<java::lang::String> str, jint fromIndex) { return call_method<"indexOf", jint>(str, fromIndex); }
	jint lastIndexOf(jni::ref<java::lang::String> str) { return call_method<"lastIndexOf", jint>(str); }
	jint lastIndexOf(jni::ref<java::lang::String> str, jint fromIndex) { return call_method<"lastIndexOf", jint>(str, fromIndex); }
	jni::ref<java::lang::StringBuilder> reverse() { return call_method<"reverse", jni::ref<java::lang::StringBuilder>>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	void trimToSize() { return call_method<"trimToSize", void>(); }
	jint codePointAt(jint index) { return call_method<"codePointAt", jint>(index); }
	void getChars(jint srcBegin, jint srcEnd, jni::ref<jni::array<jchar>> dst, jint dstBegin) { return call_method<"getChars", void>(srcBegin, srcEnd, dst, dstBegin); }
	jint length() { return call_method<"length", jint>(); }
	void setCharAt(jint index, jchar ch) { return call_method<"setCharAt", void>(index, ch); }
	jni::ref<java::lang::CharSequence> subSequence(jint start, jint end) { return call_method<"subSequence", jni::ref<java::lang::CharSequence>>(start, end); }
	jni::ref<java::lang::String> substring(jint start) { return call_method<"substring", jni::ref<java::lang::String>>(start); }
	jni::ref<java::lang::String> substring(jint start, jint end) { return call_method<"substring", jni::ref<java::lang::String>>(start, end); }
	jint capacity() { return call_method<"capacity", jint>(); }
	void setLength(jint newLength) { return call_method<"setLength", void>(newLength); }
	void ensureCapacity(jint minimumCapacity) { return call_method<"ensureCapacity", void>(minimumCapacity); }
	jint codePointBefore(jint index) { return call_method<"codePointBefore", jint>(index); }
	jchar charAt(jint index) { return call_method<"charAt", jchar>(index); }
	jint codePointCount(jint beginIndex, jint endIndex) { return call_method<"codePointCount", jint>(beginIndex, endIndex); }
	jint offsetByCodePoints(jint index, jint codePointOffset) { return call_method<"offsetByCodePoints", jint>(index, codePointOffset); }

protected:

	StringBuilder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_STRINGBUILDER