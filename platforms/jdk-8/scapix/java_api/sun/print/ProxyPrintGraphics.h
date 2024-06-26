// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/print/ProxyGraphics.h>
#include <scapix/java_api/java/awt/PrintGraphics.h>

#ifndef SCAPIX_JAVA_API_SUN_PRINT_PROXYPRINTGRAPHICS_FWD
#define SCAPIX_JAVA_API_SUN_PRINT_PROXYPRINTGRAPHICS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::print { class ProxyPrintGraphics; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::print::ProxyPrintGraphics>
{
	static constexpr fixed_string class_name = "sun/print/ProxyPrintGraphics";
	using base_classes = std::tuple<scapix::java_api::sun::print::ProxyGraphics, scapix::java_api::java::awt::PrintGraphics>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_PRINT_PROXYPRINTGRAPHICS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_PRINT_PROXYPRINTGRAPHICS)
#define SCAPIX_JAVA_API_SUN_PRINT_PROXYPRINTGRAPHICS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Graphics.h>
#include <scapix/java_api/java/awt/PrintJob.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::print::ProxyPrintGraphics : public jni::object_base<"sun/print/ProxyPrintGraphics",
	sun::print::ProxyGraphics,
	java::awt::PrintGraphics>
{
public:

	static jni::ref<sun::print::ProxyPrintGraphics> new_object(jni::ref<java::awt::Graphics> p1, jni::ref<java::awt::PrintJob> p2) { return base_::new_object(p1, p2); }
	jni::ref<java::awt::PrintJob> getPrintJob() { return call_method<"getPrintJob", jni::ref<java::awt::PrintJob>>(); }
	jni::ref<java::awt::Graphics> create() { return call_method<"create", jni::ref<java::awt::Graphics>>(); }
	jni::ref<java::awt::Graphics> create(jint p1, jint p2, jint p3, jint p4) { return call_method<"create", jni::ref<java::awt::Graphics>>(p1, p2, p3, p4); }
	jni::ref<java::awt::Graphics> getGraphics() { return call_method<"getGraphics", jni::ref<java::awt::Graphics>>(); }
	void dispose() { return call_method<"dispose", void>(); }

protected:

	ProxyPrintGraphics(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_PRINT_PROXYPRINTGRAPHICS
