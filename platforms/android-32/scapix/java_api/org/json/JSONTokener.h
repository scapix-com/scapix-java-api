// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ORG_JSON_JSONTOKENER_FWD
#define SCAPIX_JAVA_API_ORG_JSON_JSONTOKENER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::json { class JSONTokener; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::json::JSONTokener>
{
	static constexpr fixed_string class_name = "org/json/JSONTokener";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_JSON_JSONTOKENER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_JSON_JSONTOKENER)
#define SCAPIX_JAVA_API_ORG_JSON_JSONTOKENER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/org/json/JSONException.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::json::JSONTokener : public jni::object_base<"org/json/JSONTokener",
	java::lang::Object>
{
public:

	static jni::ref<org::json::JSONTokener> new_object(jni::ref<java::lang::String> in) { return base_::new_object(in); }
	jni::ref<java::lang::Object> nextValue() { return call_method<"nextValue", jni::ref<java::lang::Object>>(); }
	jni::ref<java::lang::String> nextString(jchar quote) { return call_method<"nextString", jni::ref<java::lang::String>>(quote); }
	jni::ref<org::json::JSONException> syntaxError(jni::ref<java::lang::String> message) { return call_method<"syntaxError", jni::ref<org::json::JSONException>>(message); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jboolean more() { return call_method<"more", jboolean>(); }
	jchar next() { return call_method<"next", jchar>(); }
	jchar next(jchar c) { return call_method<"next", jchar>(c); }
	jchar nextClean() { return call_method<"nextClean", jchar>(); }
	jni::ref<java::lang::String> next(jint length) { return call_method<"next", jni::ref<java::lang::String>>(length); }
	jni::ref<java::lang::String> nextTo(jni::ref<java::lang::String> excluded) { return call_method<"nextTo", jni::ref<java::lang::String>>(excluded); }
	jni::ref<java::lang::String> nextTo(jchar excluded) { return call_method<"nextTo", jni::ref<java::lang::String>>(excluded); }
	void skipPast(jni::ref<java::lang::String> thru) { return call_method<"skipPast", void>(thru); }
	jchar skipTo(jchar to) { return call_method<"skipTo", jchar>(to); }
	void back() { return call_method<"back", void>(); }
	static jint dehexchar(jchar hex) { return call_static_method<"dehexchar", jint>(hex); }

protected:

	JSONTokener(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_JSON_JSONTOKENER
