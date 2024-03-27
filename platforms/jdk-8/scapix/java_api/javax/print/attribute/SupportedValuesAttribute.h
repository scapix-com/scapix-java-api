// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/print/attribute/Attribute.h>

#ifndef SCAPIX_JAVA_API_JAVAX_PRINT_ATTRIBUTE_SUPPORTEDVALUESATTRIBUTE_FWD
#define SCAPIX_JAVA_API_JAVAX_PRINT_ATTRIBUTE_SUPPORTEDVALUESATTRIBUTE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::print::attribute { class SupportedValuesAttribute; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::print::attribute::SupportedValuesAttribute>
{
	static constexpr fixed_string class_name = "javax/print/attribute/SupportedValuesAttribute";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::javax::print::attribute::Attribute>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_PRINT_ATTRIBUTE_SUPPORTEDVALUESATTRIBUTE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_PRINT_ATTRIBUTE_SUPPORTEDVALUESATTRIBUTE)
#define SCAPIX_JAVA_API_JAVAX_PRINT_ATTRIBUTE_SUPPORTEDVALUESATTRIBUTE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::print::attribute::SupportedValuesAttribute : public jni::object_base<"javax/print/attribute/SupportedValuesAttribute",
	java::lang::Object,
	javax::print::attribute::Attribute>
{
public:


protected:

	SupportedValuesAttribute(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_PRINT_ATTRIBUTE_SUPPORTEDVALUESATTRIBUTE