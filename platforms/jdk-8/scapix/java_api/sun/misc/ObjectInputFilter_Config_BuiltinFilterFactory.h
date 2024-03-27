// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/function/BinaryOperator.h>

#ifndef SCAPIX_JAVA_API_SUN_MISC_OBJECTINPUTFILTER_CONFIG_BUILTINFILTERFACTORY_FWD
#define SCAPIX_JAVA_API_SUN_MISC_OBJECTINPUTFILTER_CONFIG_BUILTINFILTERFACTORY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::misc { class ObjectInputFilter_Config_BuiltinFilterFactory; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::misc::ObjectInputFilter_Config_BuiltinFilterFactory>
{
	static constexpr fixed_string class_name = "sun/misc/ObjectInputFilter$Config$BuiltinFilterFactory";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::util::function::BinaryOperator>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MISC_OBJECTINPUTFILTER_CONFIG_BUILTINFILTERFACTORY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_MISC_OBJECTINPUTFILTER_CONFIG_BUILTINFILTERFACTORY)
#define SCAPIX_JAVA_API_SUN_MISC_OBJECTINPUTFILTER_CONFIG_BUILTINFILTERFACTORY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/sun/misc/ObjectInputFilter.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::misc::ObjectInputFilter_Config_BuiltinFilterFactory : public jni::object_base<"sun/misc/ObjectInputFilter$Config$BuiltinFilterFactory",
	java::lang::Object,
	java::util::function::BinaryOperator>
{
public:

	jni::ref<sun::misc::ObjectInputFilter> apply(jni::ref<sun::misc::ObjectInputFilter> p1, jni::ref<sun::misc::ObjectInputFilter> p2) { return call_method<"apply", jni::ref<sun::misc::ObjectInputFilter>>(p1, p2); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	ObjectInputFilter_Config_BuiltinFilterFactory(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MISC_OBJECTINPUTFILTER_CONFIG_BUILTINFILTERFACTORY