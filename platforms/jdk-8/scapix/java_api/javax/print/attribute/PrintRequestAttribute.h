// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/print/attribute/Attribute.h>

#ifndef SCAPIX_JAVA_API_JAVAX_PRINT_ATTRIBUTE_PRINTREQUESTATTRIBUTE_FWD
#define SCAPIX_JAVA_API_JAVAX_PRINT_ATTRIBUTE_PRINTREQUESTATTRIBUTE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::print::attribute { class PrintRequestAttribute; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::print::attribute::PrintRequestAttribute>
{
	static constexpr fixed_string class_name = "javax/print/attribute/PrintRequestAttribute";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::javax::print::attribute::Attribute>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_PRINT_ATTRIBUTE_PRINTREQUESTATTRIBUTE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_PRINT_ATTRIBUTE_PRINTREQUESTATTRIBUTE)
#define SCAPIX_JAVA_API_JAVAX_PRINT_ATTRIBUTE_PRINTREQUESTATTRIBUTE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::print::attribute::PrintRequestAttribute : public jni::object_base<"javax/print/attribute/PrintRequestAttribute",
	java::lang::Object,
	javax::print::attribute::Attribute>
{
public:


protected:

	PrintRequestAttribute(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_PRINT_ATTRIBUTE_PRINTREQUESTATTRIBUTE