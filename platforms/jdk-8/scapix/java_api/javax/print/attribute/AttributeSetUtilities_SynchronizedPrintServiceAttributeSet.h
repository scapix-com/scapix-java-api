// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/print/attribute/AttributeSetUtilities_SynchronizedAttributeSet.h>
#include <scapix/java_api/javax/print/attribute/PrintServiceAttributeSet.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVAX_PRINT_ATTRIBUTE_ATTRIBUTESETUTILITIES_SYNCHRONIZEDPRINTSERVICEATTRIBUTESET_FWD
#define SCAPIX_JAVA_API_JAVAX_PRINT_ATTRIBUTE_ATTRIBUTESETUTILITIES_SYNCHRONIZEDPRINTSERVICEATTRIBUTESET_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::print::attribute { class AttributeSetUtilities_SynchronizedPrintServiceAttributeSet; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::print::attribute::AttributeSetUtilities_SynchronizedPrintServiceAttributeSet>
{
	static constexpr fixed_string class_name = "javax/print/attribute/AttributeSetUtilities$SynchronizedPrintServiceAttributeSet";
	using base_classes = std::tuple<scapix::java_api::javax::print::attribute::AttributeSetUtilities_SynchronizedAttributeSet, scapix::java_api::javax::print::attribute::PrintServiceAttributeSet, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_PRINT_ATTRIBUTE_ATTRIBUTESETUTILITIES_SYNCHRONIZEDPRINTSERVICEATTRIBUTESET_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_PRINT_ATTRIBUTE_ATTRIBUTESETUTILITIES_SYNCHRONIZEDPRINTSERVICEATTRIBUTESET)
#define SCAPIX_JAVA_API_JAVAX_PRINT_ATTRIBUTE_ATTRIBUTESETUTILITIES_SYNCHRONIZEDPRINTSERVICEATTRIBUTESET

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::print::attribute::AttributeSetUtilities_SynchronizedPrintServiceAttributeSet : public jni::object_base<"javax/print/attribute/AttributeSetUtilities$SynchronizedPrintServiceAttributeSet",
	javax::print::attribute::AttributeSetUtilities_SynchronizedAttributeSet,
	javax::print::attribute::PrintServiceAttributeSet,
	java::io::Serializable>
{
public:

	static jni::ref<javax::print::attribute::AttributeSetUtilities_SynchronizedPrintServiceAttributeSet> new_object(jni::ref<javax::print::attribute::PrintServiceAttributeSet> p1) { return base_::new_object(p1); }

protected:

	AttributeSetUtilities_SynchronizedPrintServiceAttributeSet(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_PRINT_ATTRIBUTE_ATTRIBUTESETUTILITIES_SYNCHRONIZEDPRINTSERVICEATTRIBUTESET
