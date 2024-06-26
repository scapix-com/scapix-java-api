// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/print/attribute/AttributeSetUtilities_UnmodifiableAttributeSet.h>
#include <scapix/java_api/javax/print/attribute/PrintRequestAttributeSet.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVAX_PRINT_ATTRIBUTE_ATTRIBUTESETUTILITIES_UNMODIFIABLEPRINTREQUESTATTRIBUTESET_FWD
#define SCAPIX_JAVA_API_JAVAX_PRINT_ATTRIBUTE_ATTRIBUTESETUTILITIES_UNMODIFIABLEPRINTREQUESTATTRIBUTESET_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::print::attribute { class AttributeSetUtilities_UnmodifiablePrintRequestAttributeSet; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::print::attribute::AttributeSetUtilities_UnmodifiablePrintRequestAttributeSet>
{
	static constexpr fixed_string class_name = "javax/print/attribute/AttributeSetUtilities$UnmodifiablePrintRequestAttributeSet";
	using base_classes = std::tuple<scapix::java_api::javax::print::attribute::AttributeSetUtilities_UnmodifiableAttributeSet, scapix::java_api::javax::print::attribute::PrintRequestAttributeSet, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_PRINT_ATTRIBUTE_ATTRIBUTESETUTILITIES_UNMODIFIABLEPRINTREQUESTATTRIBUTESET_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_PRINT_ATTRIBUTE_ATTRIBUTESETUTILITIES_UNMODIFIABLEPRINTREQUESTATTRIBUTESET)
#define SCAPIX_JAVA_API_JAVAX_PRINT_ATTRIBUTE_ATTRIBUTESETUTILITIES_UNMODIFIABLEPRINTREQUESTATTRIBUTESET

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::print::attribute::AttributeSetUtilities_UnmodifiablePrintRequestAttributeSet : public jni::object_base<"javax/print/attribute/AttributeSetUtilities$UnmodifiablePrintRequestAttributeSet",
	javax::print::attribute::AttributeSetUtilities_UnmodifiableAttributeSet,
	javax::print::attribute::PrintRequestAttributeSet,
	java::io::Serializable>
{
public:

	static jni::ref<javax::print::attribute::AttributeSetUtilities_UnmodifiablePrintRequestAttributeSet> new_object(jni::ref<javax::print::attribute::PrintRequestAttributeSet> p1) { return base_::new_object(p1); }

protected:

	AttributeSetUtilities_UnmodifiablePrintRequestAttributeSet(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_PRINT_ATTRIBUTE_ATTRIBUTESETUTILITIES_UNMODIFIABLEPRINTREQUESTATTRIBUTESET
