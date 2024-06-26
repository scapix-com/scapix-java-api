// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/AbstractSet.h>

#ifndef SCAPIX_JAVA_API_JAVAX_PRINT_ATTRIBUTE_STANDARD_PRINTERSTATEREASONS_PRINTERSTATEREASONSET_FWD
#define SCAPIX_JAVA_API_JAVAX_PRINT_ATTRIBUTE_STANDARD_PRINTERSTATEREASONS_PRINTERSTATEREASONSET_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::print::attribute::standard { class PrinterStateReasons_PrinterStateReasonSet; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::print::attribute::standard::PrinterStateReasons_PrinterStateReasonSet>
{
	static constexpr fixed_string class_name = "javax/print/attribute/standard/PrinterStateReasons$PrinterStateReasonSet";
	using base_classes = std::tuple<scapix::java_api::java::util::AbstractSet>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_PRINT_ATTRIBUTE_STANDARD_PRINTERSTATEREASONS_PRINTERSTATEREASONSET_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_PRINT_ATTRIBUTE_STANDARD_PRINTERSTATEREASONS_PRINTERSTATEREASONSET)
#define SCAPIX_JAVA_API_JAVAX_PRINT_ATTRIBUTE_STANDARD_PRINTERSTATEREASONS_PRINTERSTATEREASONSET

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/Iterator.h>
#include <scapix/java_api/java/util/Set.h>
#include <scapix/java_api/javax/print/attribute/standard/PrinterStateReasons.h>
#include <scapix/java_api/javax/print/attribute/standard/Severity.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::print::attribute::standard::PrinterStateReasons_PrinterStateReasonSet : public jni::object_base<"javax/print/attribute/standard/PrinterStateReasons$PrinterStateReasonSet",
	java::util::AbstractSet>
{
public:

	static jni::ref<javax::print::attribute::standard::PrinterStateReasons_PrinterStateReasonSet> new_object(jni::ref<javax::print::attribute::standard::PrinterStateReasons> p1, jni::ref<javax::print::attribute::standard::Severity> p2, jni::ref<java::util::Set> p3) { return base_::new_object(p1, p2, p3); }
	jint size() { return call_method<"size", jint>(); }
	jni::ref<java::util::Iterator> iterator() { return call_method<"iterator", jni::ref<java::util::Iterator>>(); }

protected:

	PrinterStateReasons_PrinterStateReasonSet(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_PRINT_ATTRIBUTE_STANDARD_PRINTERSTATEREASONS_PRINTERSTATEREASONSET
