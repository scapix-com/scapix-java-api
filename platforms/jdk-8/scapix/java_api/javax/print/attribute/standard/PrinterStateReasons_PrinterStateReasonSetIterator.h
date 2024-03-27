// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/Iterator.h>

#ifndef SCAPIX_JAVA_API_JAVAX_PRINT_ATTRIBUTE_STANDARD_PRINTERSTATEREASONS_PRINTERSTATEREASONSETITERATOR_FWD
#define SCAPIX_JAVA_API_JAVAX_PRINT_ATTRIBUTE_STANDARD_PRINTERSTATEREASONS_PRINTERSTATEREASONSETITERATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::print::attribute::standard { class PrinterStateReasons_PrinterStateReasonSetIterator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::print::attribute::standard::PrinterStateReasons_PrinterStateReasonSetIterator>
{
	static constexpr fixed_string class_name = "javax/print/attribute/standard/PrinterStateReasons$PrinterStateReasonSetIterator";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::util::Iterator>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_PRINT_ATTRIBUTE_STANDARD_PRINTERSTATEREASONS_PRINTERSTATEREASONSETITERATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_PRINT_ATTRIBUTE_STANDARD_PRINTERSTATEREASONS_PRINTERSTATEREASONSETITERATOR)
#define SCAPIX_JAVA_API_JAVAX_PRINT_ATTRIBUTE_STANDARD_PRINTERSTATEREASONS_PRINTERSTATEREASONSETITERATOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/javax/print/attribute/standard/PrinterStateReasons.h>
#include <scapix/java_api/javax/print/attribute/standard/Severity.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::print::attribute::standard::PrinterStateReasons_PrinterStateReasonSetIterator : public jni::object_base<"javax/print/attribute/standard/PrinterStateReasons$PrinterStateReasonSetIterator",
	java::lang::Object,
	java::util::Iterator>
{
public:

	static jni::ref<javax::print::attribute::standard::PrinterStateReasons_PrinterStateReasonSetIterator> new_object(jni::ref<javax::print::attribute::standard::PrinterStateReasons> p1, jni::ref<javax::print::attribute::standard::Severity> p2, jni::ref<java::util::Iterator> p3) { return base_::new_object(p1, p2, p3); }
	jboolean hasNext() { return call_method<"hasNext", jboolean>(); }
	jni::ref<java::lang::Object> next() { return call_method<"next", jni::ref<java::lang::Object>>(); }
	void remove() { return call_method<"remove", void>(); }

protected:

	PrinterStateReasons_PrinterStateReasonSetIterator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_PRINT_ATTRIBUTE_STANDARD_PRINTERSTATEREASONS_PRINTERSTATEREASONSETITERATOR