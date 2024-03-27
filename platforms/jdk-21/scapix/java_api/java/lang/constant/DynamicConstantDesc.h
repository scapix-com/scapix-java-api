// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/constant/ConstantDesc.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_CONSTANT_DYNAMICCONSTANTDESC_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_CONSTANT_DYNAMICCONSTANTDESC_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::constant { class DynamicConstantDesc; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::constant::DynamicConstantDesc>
{
	static constexpr fixed_string class_name = "java/lang/constant/DynamicConstantDesc";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::constant::ConstantDesc>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_CONSTANT_DYNAMICCONSTANTDESC_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_CONSTANT_DYNAMICCONSTANTDESC)
#define SCAPIX_JAVA_API_JAVA_LANG_CONSTANT_DYNAMICCONSTANTDESC

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/constant/ClassDesc.h>
#include <scapix/java_api/java/lang/constant/DirectMethodHandleDesc.h>
#include <scapix/java_api/java/lang/invoke/MethodHandles_Lookup.h>
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::constant::DynamicConstantDesc : public jni::object_base<"java/lang/constant/DynamicConstantDesc",
	java::lang::Object,
	java::lang::constant::ConstantDesc>
{
public:

	static jni::ref<java::lang::constant::ConstantDesc> ofCanonical(jni::ref<java::lang::constant::DirectMethodHandleDesc> bootstrapMethod, jni::ref<java::lang::String> constantName, jni::ref<java::lang::constant::ClassDesc> constantType, jni::ref<jni::array<java::lang::constant::ConstantDesc>> bootstrapArgs) { return call_static_method<"ofCanonical", jni::ref<java::lang::constant::ConstantDesc>>(bootstrapMethod, constantName, constantType, bootstrapArgs); }
	static jni::ref<java::lang::constant::DynamicConstantDesc> ofNamed(jni::ref<java::lang::constant::DirectMethodHandleDesc> bootstrapMethod, jni::ref<java::lang::String> constantName, jni::ref<java::lang::constant::ClassDesc> constantType, jni::ref<jni::array<java::lang::constant::ConstantDesc>> bootstrapArgs) { return call_static_method<"ofNamed", jni::ref<java::lang::constant::DynamicConstantDesc>>(bootstrapMethod, constantName, constantType, bootstrapArgs); }
	static jni::ref<java::lang::constant::DynamicConstantDesc> of(jni::ref<java::lang::constant::DirectMethodHandleDesc> bootstrapMethod, jni::ref<jni::array<java::lang::constant::ConstantDesc>> bootstrapArgs) { return call_static_method<"of", jni::ref<java::lang::constant::DynamicConstantDesc>>(bootstrapMethod, bootstrapArgs); }
	static jni::ref<java::lang::constant::DynamicConstantDesc> of(jni::ref<java::lang::constant::DirectMethodHandleDesc> bootstrapMethod) { return call_static_method<"of", jni::ref<java::lang::constant::DynamicConstantDesc>>(bootstrapMethod); }
	jni::ref<java::lang::String> constantName() { return call_method<"constantName", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::constant::ClassDesc> constantType() { return call_method<"constantType", jni::ref<java::lang::constant::ClassDesc>>(); }
	jni::ref<java::lang::constant::DirectMethodHandleDesc> bootstrapMethod() { return call_method<"bootstrapMethod", jni::ref<java::lang::constant::DirectMethodHandleDesc>>(); }
	jni::ref<jni::array<java::lang::constant::ConstantDesc>> bootstrapArgs() { return call_method<"bootstrapArgs", jni::ref<jni::array<java::lang::constant::ConstantDesc>>>(); }
	jni::ref<java::util::List> bootstrapArgsList() { return call_method<"bootstrapArgsList", jni::ref<java::util::List>>(); }
	jni::ref<java::lang::Object> resolveConstantDesc(jni::ref<java::lang::invoke::MethodHandles_Lookup> lookup) { return call_method<"resolveConstantDesc", jni::ref<java::lang::Object>>(lookup); }
	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	DynamicConstantDesc(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_CONSTANT_DYNAMICCONSTANTDESC
