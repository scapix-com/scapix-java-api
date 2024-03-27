// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_SQL_DRIVERPROPERTYINFO_FWD
#define SCAPIX_JAVA_API_JAVA_SQL_DRIVERPROPERTYINFO_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::sql { class DriverPropertyInfo; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::sql::DriverPropertyInfo>
{
	static constexpr fixed_string class_name = "java/sql/DriverPropertyInfo";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SQL_DRIVERPROPERTYINFO_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_SQL_DRIVERPROPERTYINFO)
#define SCAPIX_JAVA_API_JAVA_SQL_DRIVERPROPERTYINFO

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::sql::DriverPropertyInfo : public jni::object_base<"java/sql/DriverPropertyInfo",
	java::lang::Object>
{
public:

	jni::ref<jni::array<java::lang::String>> choices() { return get_field<"choices", jni::ref<jni::array<java::lang::String>>>(); }
	void choices(jni::ref<jni::array<java::lang::String>> v) { set_field<"choices", jni::ref<jni::array<java::lang::String>>>(v); }
	jni::ref<java::lang::String> description() { return get_field<"description", jni::ref<java::lang::String>>(); }
	void description(jni::ref<java::lang::String> v) { set_field<"description", jni::ref<java::lang::String>>(v); }
	jni::ref<java::lang::String> name() { return get_field<"name", jni::ref<java::lang::String>>(); }
	void name(jni::ref<java::lang::String> v) { set_field<"name", jni::ref<java::lang::String>>(v); }
	jboolean required() { return get_field<"required", jboolean>(); }
	void required(jboolean v) { set_field<"required", jboolean>(v); }
	jni::ref<java::lang::String> value() { return get_field<"value", jni::ref<java::lang::String>>(); }
	void value(jni::ref<java::lang::String> v) { set_field<"value", jni::ref<java::lang::String>>(v); }

	static jni::ref<java::sql::DriverPropertyInfo> new_object(jni::ref<java::lang::String> name, jni::ref<java::lang::String> value) { return base_::new_object(name, value); }

protected:

	DriverPropertyInfo(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SQL_DRIVERPROPERTYINFO
