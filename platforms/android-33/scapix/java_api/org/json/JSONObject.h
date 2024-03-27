// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ORG_JSON_JSONOBJECT_FWD
#define SCAPIX_JAVA_API_ORG_JSON_JSONOBJECT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::json { class JSONObject; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::json::JSONObject>
{
	static constexpr fixed_string class_name = "org/json/JSONObject";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_JSON_JSONOBJECT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_JSON_JSONOBJECT)
#define SCAPIX_JAVA_API_ORG_JSON_JSONOBJECT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Number.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Iterator.h>
#include <scapix/java_api/java/util/Map.h>
#include <scapix/java_api/org/json/JSONArray.h>
#include <scapix/java_api/org/json/JSONTokener.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::json::JSONObject : public jni::object_base<"org/json/JSONObject",
	java::lang::Object>
{
public:

	static jni::ref<java::lang::Object> NULL() { return get_static_field<"NULL", jni::ref<java::lang::Object>>(); }

	static jni::ref<org::json::JSONObject> new_object() { return base_::new_object(); }
	static jni::ref<org::json::JSONObject> new_object(jni::ref<java::util::Map> copyFrom) { return base_::new_object(copyFrom); }
	static jni::ref<org::json::JSONObject> new_object(jni::ref<org::json::JSONTokener> readFrom) { return base_::new_object(readFrom); }
	static jni::ref<org::json::JSONObject> new_object(jni::ref<java::lang::String> json) { return base_::new_object(json); }
	static jni::ref<org::json::JSONObject> new_object(jni::ref<org::json::JSONObject> copyFrom, jni::ref<jni::array<java::lang::String>> names) { return base_::new_object(copyFrom, names); }
	jint length() { return call_method<"length", jint>(); }
	jni::ref<org::json::JSONObject> put(jni::ref<java::lang::String> name, jboolean value) { return call_method<"put", jni::ref<org::json::JSONObject>>(name, value); }
	jni::ref<org::json::JSONObject> put(jni::ref<java::lang::String> name, jdouble value) { return call_method<"put", jni::ref<org::json::JSONObject>>(name, value); }
	jni::ref<org::json::JSONObject> put(jni::ref<java::lang::String> name, jint value) { return call_method<"put", jni::ref<org::json::JSONObject>>(name, value); }
	jni::ref<org::json::JSONObject> put(jni::ref<java::lang::String> name, jlong value) { return call_method<"put", jni::ref<org::json::JSONObject>>(name, value); }
	jni::ref<org::json::JSONObject> put(jni::ref<java::lang::String> name, jni::ref<java::lang::Object> value) { return call_method<"put", jni::ref<org::json::JSONObject>>(name, value); }
	jni::ref<org::json::JSONObject> putOpt(jni::ref<java::lang::String> name, jni::ref<java::lang::Object> value) { return call_method<"putOpt", jni::ref<org::json::JSONObject>>(name, value); }
	jni::ref<org::json::JSONObject> accumulate(jni::ref<java::lang::String> name, jni::ref<java::lang::Object> value) { return call_method<"accumulate", jni::ref<org::json::JSONObject>>(name, value); }
	jni::ref<org::json::JSONObject> append(jni::ref<java::lang::String> name, jni::ref<java::lang::Object> value) { return call_method<"append", jni::ref<org::json::JSONObject>>(name, value); }
	jni::ref<java::lang::Object> remove(jni::ref<java::lang::String> name) { return call_method<"remove", jni::ref<java::lang::Object>>(name); }
	jboolean isNull(jni::ref<java::lang::String> name) { return call_method<"isNull", jboolean>(name); }
	jboolean has(jni::ref<java::lang::String> name) { return call_method<"has", jboolean>(name); }
	jni::ref<java::lang::Object> get(jni::ref<java::lang::String> name) { return call_method<"get", jni::ref<java::lang::Object>>(name); }
	jni::ref<java::lang::Object> opt(jni::ref<java::lang::String> name) { return call_method<"opt", jni::ref<java::lang::Object>>(name); }
	jboolean getBoolean(jni::ref<java::lang::String> name) { return call_method<"getBoolean", jboolean>(name); }
	jboolean optBoolean(jni::ref<java::lang::String> name) { return call_method<"optBoolean", jboolean>(name); }
	jboolean optBoolean(jni::ref<java::lang::String> name, jboolean fallback) { return call_method<"optBoolean", jboolean>(name, fallback); }
	jdouble getDouble(jni::ref<java::lang::String> name) { return call_method<"getDouble", jdouble>(name); }
	jdouble optDouble(jni::ref<java::lang::String> name) { return call_method<"optDouble", jdouble>(name); }
	jdouble optDouble(jni::ref<java::lang::String> name, jdouble fallback) { return call_method<"optDouble", jdouble>(name, fallback); }
	jint getInt(jni::ref<java::lang::String> name) { return call_method<"getInt", jint>(name); }
	jint optInt(jni::ref<java::lang::String> name) { return call_method<"optInt", jint>(name); }
	jint optInt(jni::ref<java::lang::String> name, jint fallback) { return call_method<"optInt", jint>(name, fallback); }
	jlong getLong(jni::ref<java::lang::String> name) { return call_method<"getLong", jlong>(name); }
	jlong optLong(jni::ref<java::lang::String> name) { return call_method<"optLong", jlong>(name); }
	jlong optLong(jni::ref<java::lang::String> name, jlong fallback) { return call_method<"optLong", jlong>(name, fallback); }
	jni::ref<java::lang::String> getString(jni::ref<java::lang::String> name) { return call_method<"getString", jni::ref<java::lang::String>>(name); }
	jni::ref<java::lang::String> optString(jni::ref<java::lang::String> name) { return call_method<"optString", jni::ref<java::lang::String>>(name); }
	jni::ref<java::lang::String> optString(jni::ref<java::lang::String> name, jni::ref<java::lang::String> fallback) { return call_method<"optString", jni::ref<java::lang::String>>(name, fallback); }
	jni::ref<org::json::JSONArray> getJSONArray(jni::ref<java::lang::String> name) { return call_method<"getJSONArray", jni::ref<org::json::JSONArray>>(name); }
	jni::ref<org::json::JSONArray> optJSONArray(jni::ref<java::lang::String> name) { return call_method<"optJSONArray", jni::ref<org::json::JSONArray>>(name); }
	jni::ref<org::json::JSONObject> getJSONObject(jni::ref<java::lang::String> name) { return call_method<"getJSONObject", jni::ref<org::json::JSONObject>>(name); }
	jni::ref<org::json::JSONObject> optJSONObject(jni::ref<java::lang::String> name) { return call_method<"optJSONObject", jni::ref<org::json::JSONObject>>(name); }
	jni::ref<org::json::JSONArray> toJSONArray(jni::ref<org::json::JSONArray> names) { return call_method<"toJSONArray", jni::ref<org::json::JSONArray>>(names); }
	jni::ref<java::util::Iterator> keys() { return call_method<"keys", jni::ref<java::util::Iterator>>(); }
	jni::ref<org::json::JSONArray> names() { return call_method<"names", jni::ref<org::json::JSONArray>>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> toString(jint indentSpaces) { return call_method<"toString", jni::ref<java::lang::String>>(indentSpaces); }
	static jni::ref<java::lang::String> numberToString(jni::ref<java::lang::Number> number) { return call_static_method<"numberToString", jni::ref<java::lang::String>>(number); }
	static jni::ref<java::lang::String> quote(jni::ref<java::lang::String> data) { return call_static_method<"quote", jni::ref<java::lang::String>>(data); }
	static jni::ref<java::lang::Object> wrap(jni::ref<java::lang::Object> o) { return call_static_method<"wrap", jni::ref<java::lang::Object>>(o); }

protected:

	JSONObject(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_JSON_JSONOBJECT
