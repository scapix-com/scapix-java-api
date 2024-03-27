// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Record.h>
#include <scapix/java_api/java/lang/constant/ModuleDesc.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_CONSTANT_MODULEDESCIMPL_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_CONSTANT_MODULEDESCIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::constant { class ModuleDescImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::constant::ModuleDescImpl>
{
	static constexpr fixed_string class_name = "java/lang/constant/ModuleDescImpl";
	using base_classes = std::tuple<scapix::java_api::java::lang::Record, scapix::java_api::java::lang::constant::ModuleDesc>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_CONSTANT_MODULEDESCIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_CONSTANT_MODULEDESCIMPL)
#define SCAPIX_JAVA_API_JAVA_LANG_CONSTANT_MODULEDESCIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::lang::constant::ModuleDescImpl : public jni::object_base<"java/lang/constant/ModuleDescImpl",
	java::lang::Record,
	java::lang::constant::ModuleDesc>
{
public:

	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }
	jni::ref<java::lang::String> name() { return call_method<"name", jni::ref<java::lang::String>>(); }

protected:

	ModuleDescImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_CONSTANT_MODULEDESCIMPL
