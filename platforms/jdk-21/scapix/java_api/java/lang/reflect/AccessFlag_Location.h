// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_REFLECT_ACCESSFLAG_LOCATION_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_REFLECT_ACCESSFLAG_LOCATION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::reflect { class AccessFlag_Location; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::reflect::AccessFlag_Location>
{
	static constexpr fixed_string class_name = "java/lang/reflect/AccessFlag$Location";
	using base_classes = std::tuple<scapix::java_api::java::lang::Enum>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_REFLECT_ACCESSFLAG_LOCATION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_REFLECT_ACCESSFLAG_LOCATION)
#define SCAPIX_JAVA_API_JAVA_LANG_REFLECT_ACCESSFLAG_LOCATION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::reflect::AccessFlag_Location : public jni::object_base<"java/lang/reflect/AccessFlag$Location",
	java::lang::Enum>
{
public:

	static jni::ref<java::lang::reflect::AccessFlag_Location> CLASS() { return get_static_field<"CLASS", jni::ref<java::lang::reflect::AccessFlag_Location>>(); }
	static jni::ref<java::lang::reflect::AccessFlag_Location> FIELD() { return get_static_field<"FIELD", jni::ref<java::lang::reflect::AccessFlag_Location>>(); }
	static jni::ref<java::lang::reflect::AccessFlag_Location> METHOD() { return get_static_field<"METHOD", jni::ref<java::lang::reflect::AccessFlag_Location>>(); }
	static jni::ref<java::lang::reflect::AccessFlag_Location> INNER_CLASS() { return get_static_field<"INNER_CLASS", jni::ref<java::lang::reflect::AccessFlag_Location>>(); }
	static jni::ref<java::lang::reflect::AccessFlag_Location> METHOD_PARAMETER() { return get_static_field<"METHOD_PARAMETER", jni::ref<java::lang::reflect::AccessFlag_Location>>(); }
	static jni::ref<java::lang::reflect::AccessFlag_Location> MODULE() { return get_static_field<"MODULE", jni::ref<java::lang::reflect::AccessFlag_Location>>(); }
	static jni::ref<java::lang::reflect::AccessFlag_Location> MODULE_REQUIRES() { return get_static_field<"MODULE_REQUIRES", jni::ref<java::lang::reflect::AccessFlag_Location>>(); }
	static jni::ref<java::lang::reflect::AccessFlag_Location> MODULE_EXPORTS() { return get_static_field<"MODULE_EXPORTS", jni::ref<java::lang::reflect::AccessFlag_Location>>(); }
	static jni::ref<java::lang::reflect::AccessFlag_Location> MODULE_OPENS() { return get_static_field<"MODULE_OPENS", jni::ref<java::lang::reflect::AccessFlag_Location>>(); }

	static jni::ref<jni::array<java::lang::reflect::AccessFlag_Location>> values() { return call_static_method<"values", jni::ref<jni::array<java::lang::reflect::AccessFlag_Location>>>(); }
	static jni::ref<java::lang::reflect::AccessFlag_Location> valueOf(jni::ref<java::lang::String> name) { return call_static_method<"valueOf", jni::ref<java::lang::reflect::AccessFlag_Location>>(name); }

protected:

	AccessFlag_Location(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_REFLECT_ACCESSFLAG_LOCATION
