// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_CONSTANT_PACKAGEDESC_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_CONSTANT_PACKAGEDESC_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::constant { class PackageDesc; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::constant::PackageDesc>
{
	static constexpr fixed_string class_name = "java/lang/constant/PackageDesc";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_CONSTANT_PACKAGEDESC_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_CONSTANT_PACKAGEDESC)
#define SCAPIX_JAVA_API_JAVA_LANG_CONSTANT_PACKAGEDESC

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::constant::PackageDesc : public jni::object_base<"java/lang/constant/PackageDesc",
	java::lang::Object>
{
public:

	static jni::ref<java::lang::constant::PackageDesc> of(jni::ref<java::lang::String> name) { return call_static_method<"of", jni::ref<java::lang::constant::PackageDesc>>(name); }
	static jni::ref<java::lang::constant::PackageDesc> ofInternalName(jni::ref<java::lang::String> name) { return call_static_method<"ofInternalName", jni::ref<java::lang::constant::PackageDesc>>(name); }
	jni::ref<java::lang::String> internalName() { return call_method<"internalName", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> name() { return call_method<"name", jni::ref<java::lang::String>>(); }
	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }

protected:

	PackageDesc(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_CONSTANT_PACKAGEDESC
