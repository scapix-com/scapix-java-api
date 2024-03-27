// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/HashMap.h>
#include <scapix/java_api/javax/print/attribute/PrintServiceAttribute.h>

#ifndef SCAPIX_JAVA_API_JAVAX_PRINT_ATTRIBUTE_STANDARD_PRINTERSTATEREASONS_FWD
#define SCAPIX_JAVA_API_JAVAX_PRINT_ATTRIBUTE_STANDARD_PRINTERSTATEREASONS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::print::attribute::standard { class PrinterStateReasons; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::print::attribute::standard::PrinterStateReasons>
{
	static constexpr fixed_string class_name = "javax/print/attribute/standard/PrinterStateReasons";
	using base_classes = std::tuple<scapix::java_api::java::util::HashMap, scapix::java_api::javax::print::attribute::PrintServiceAttribute>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_PRINT_ATTRIBUTE_STANDARD_PRINTERSTATEREASONS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_PRINT_ATTRIBUTE_STANDARD_PRINTERSTATEREASONS)
#define SCAPIX_JAVA_API_JAVAX_PRINT_ATTRIBUTE_STANDARD_PRINTERSTATEREASONS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Map.h>
#include <scapix/java_api/java/util/Set.h>
#include <scapix/java_api/javax/print/attribute/standard/PrinterStateReason.h>
#include <scapix/java_api/javax/print/attribute/standard/Severity.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::print::attribute::standard::PrinterStateReasons : public jni::object_base<"javax/print/attribute/standard/PrinterStateReasons",
	java::util::HashMap,
	javax::print::attribute::PrintServiceAttribute>
{
public:

	static jni::ref<javax::print::attribute::standard::PrinterStateReasons> new_object() { return base_::new_object(); }
	static jni::ref<javax::print::attribute::standard::PrinterStateReasons> new_object(jint p1) { return base_::new_object(p1); }
	static jni::ref<javax::print::attribute::standard::PrinterStateReasons> new_object(jint p1, jfloat p2) { return base_::new_object(p1, p2); }
	static jni::ref<javax::print::attribute::standard::PrinterStateReasons> new_object(jni::ref<java::util::Map> p1) { return base_::new_object(p1); }
	jni::ref<javax::print::attribute::standard::Severity> put(jni::ref<javax::print::attribute::standard::PrinterStateReason> p1, jni::ref<javax::print::attribute::standard::Severity> p2) { return call_method<"put", jni::ref<javax::print::attribute::standard::Severity>>(p1, p2); }
	jni::ref<java::lang::Class> getCategory() { return call_method<"getCategory", jni::ref<java::lang::Class>>(); }
	jni::ref<java::lang::String> getName() { return call_method<"getName", jni::ref<java::lang::String>>(); }
	jni::ref<java::util::Set> printerStateReasonSet(jni::ref<javax::print::attribute::standard::Severity> p1) { return call_method<"printerStateReasonSet", jni::ref<java::util::Set>>(p1); }

protected:

	PrinterStateReasons(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_PRINT_ATTRIBUTE_STANDARD_PRINTERSTATEREASONS
