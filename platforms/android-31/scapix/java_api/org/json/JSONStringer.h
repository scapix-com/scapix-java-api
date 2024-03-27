// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ORG_JSON_JSONSTRINGER_FWD
#define SCAPIX_JAVA_API_ORG_JSON_JSONSTRINGER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::json { class JSONStringer; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::json::JSONStringer>
{
	static constexpr fixed_string class_name = "org/json/JSONStringer";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_JSON_JSONSTRINGER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_JSON_JSONSTRINGER)
#define SCAPIX_JAVA_API_ORG_JSON_JSONSTRINGER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::json::JSONStringer : public jni::object_base<"org/json/JSONStringer",
	java::lang::Object>
{
public:

	static jni::ref<org::json::JSONStringer> new_object() { return base_::new_object(); }
	jni::ref<org::json::JSONStringer> array() { return call_method<"array", jni::ref<org::json::JSONStringer>>(); }
	jni::ref<org::json::JSONStringer> endArray() { return call_method<"endArray", jni::ref<org::json::JSONStringer>>(); }
	jni::ref<org::json::JSONStringer> object() { return call_method<"object", jni::ref<org::json::JSONStringer>>(); }
	jni::ref<org::json::JSONStringer> endObject() { return call_method<"endObject", jni::ref<org::json::JSONStringer>>(); }
	jni::ref<org::json::JSONStringer> value(jni::ref<java::lang::Object> value) { return call_method<"value", jni::ref<org::json::JSONStringer>>(value); }
	jni::ref<org::json::JSONStringer> value(jboolean value) { return call_method<"value", jni::ref<org::json::JSONStringer>>(value); }
	jni::ref<org::json::JSONStringer> value(jdouble value) { return call_method<"value", jni::ref<org::json::JSONStringer>>(value); }
	jni::ref<org::json::JSONStringer> value(jlong value) { return call_method<"value", jni::ref<org::json::JSONStringer>>(value); }
	jni::ref<org::json::JSONStringer> key(jni::ref<java::lang::String> name) { return call_method<"key", jni::ref<org::json::JSONStringer>>(name); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	JSONStringer(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_JSON_JSONSTRINGER
