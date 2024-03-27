// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_AWT_PRINTGRAPHICS_FWD
#define SCAPIX_JAVA_API_JAVA_AWT_PRINTGRAPHICS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::awt { class PrintGraphics; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::awt::PrintGraphics>
{
	static constexpr fixed_string class_name = "java/awt/PrintGraphics";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_PRINTGRAPHICS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_AWT_PRINTGRAPHICS)
#define SCAPIX_JAVA_API_JAVA_AWT_PRINTGRAPHICS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/PrintJob.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::awt::PrintGraphics : public jni::object_base<"java/awt/PrintGraphics",
	java::lang::Object>
{
public:

	jni::ref<java::awt::PrintJob> getPrintJob() { return call_method<"getPrintJob", jni::ref<java::awt::PrintJob>>(); }

protected:

	PrintGraphics(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_PRINTGRAPHICS
