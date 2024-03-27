// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/reflect/Type.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_REFLECT_WILDCARDTYPE_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_REFLECT_WILDCARDTYPE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::reflect { class WildcardType; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::reflect::WildcardType>
{
	static constexpr fixed_string class_name = "java/lang/reflect/WildcardType";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::reflect::Type>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_REFLECT_WILDCARDTYPE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_REFLECT_WILDCARDTYPE)
#define SCAPIX_JAVA_API_JAVA_LANG_REFLECT_WILDCARDTYPE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::reflect::WildcardType : public jni::object_base<"java/lang/reflect/WildcardType",
	java::lang::Object,
	java::lang::reflect::Type>
{
public:

	jni::ref<jni::array<java::lang::reflect::Type>> getUpperBounds() { return call_method<"getUpperBounds", jni::ref<jni::array<java::lang::reflect::Type>>>(); }
	jni::ref<jni::array<java::lang::reflect::Type>> getLowerBounds() { return call_method<"getLowerBounds", jni::ref<jni::array<java::lang::reflect::Type>>>(); }

protected:

	WildcardType(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_REFLECT_WILDCARDTYPE