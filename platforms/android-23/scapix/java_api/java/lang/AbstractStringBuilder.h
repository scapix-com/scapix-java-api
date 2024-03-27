// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_ABSTRACTSTRINGBUILDER_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_ABSTRACTSTRINGBUILDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang { class AbstractStringBuilder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::AbstractStringBuilder>
{
	static constexpr fixed_string class_name = "java/lang/AbstractStringBuilder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_ABSTRACTSTRINGBUILDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_ABSTRACTSTRINGBUILDER)
#define SCAPIX_JAVA_API_JAVA_LANG_ABSTRACTSTRINGBUILDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::lang::AbstractStringBuilder : public jni::object_base<"java/lang/AbstractStringBuilder",
	java::lang::Object>
{
public:

	jint capacity() { return call_method<"capacity", jint>(); }
	jchar charAt(jint index) { return call_method<"charAt", jchar>(index); }
	void ensureCapacity(jint min) { return call_method<"ensureCapacity", void>(min); }
	void getChars(jint start, jint end, jni::ref<jni::array<jchar>> dst, jint dstStart) { return call_method<"getChars", void>(start, end, dst, dstStart); }
	jint length() { return call_method<"length", jint>(); }
	void setCharAt(jint index, jchar ch) { return call_method<"setCharAt", void>(index, ch); }
	void setLength(jint length) { return call_method<"setLength", void>(length); }
	jni::ref<java::lang::String> substring(jint start) { return call_method<"substring", jni::ref<java::lang::String>>(start); }
	jni::ref<java::lang::String> substring(jint start, jint end) { return call_method<"substring", jni::ref<java::lang::String>>(start, end); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::CharSequence> subSequence(jint start, jint end) { return call_method<"subSequence", jni::ref<java::lang::CharSequence>>(start, end); }
	jint indexOf(jni::ref<java::lang::String> string) { return call_method<"indexOf", jint>(string); }
	jint indexOf(jni::ref<java::lang::String> subString, jint start) { return call_method<"indexOf", jint>(subString, start); }
	jint lastIndexOf(jni::ref<java::lang::String> string) { return call_method<"lastIndexOf", jint>(string); }
	jint lastIndexOf(jni::ref<java::lang::String> subString, jint start) { return call_method<"lastIndexOf", jint>(subString, start); }
	void trimToSize() { return call_method<"trimToSize", void>(); }
	jint codePointAt(jint index) { return call_method<"codePointAt", jint>(index); }
	jint codePointBefore(jint index) { return call_method<"codePointBefore", jint>(index); }
	jint codePointCount(jint start, jint end) { return call_method<"codePointCount", jint>(start, end); }
	jint offsetByCodePoints(jint index, jint codePointOffset) { return call_method<"offsetByCodePoints", jint>(index, codePointOffset); }

protected:

	AbstractStringBuilder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_ABSTRACTSTRINGBUILDER