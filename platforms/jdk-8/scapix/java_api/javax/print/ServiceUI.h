// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_PRINT_SERVICEUI_FWD
#define SCAPIX_JAVA_API_JAVAX_PRINT_SERVICEUI_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::print { class ServiceUI; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::print::ServiceUI>
{
	static constexpr fixed_string class_name = "javax/print/ServiceUI";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_PRINT_SERVICEUI_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_PRINT_SERVICEUI)
#define SCAPIX_JAVA_API_JAVAX_PRINT_SERVICEUI

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/GraphicsConfiguration.h>
#include <scapix/java_api/javax/print/DocFlavor.h>
#include <scapix/java_api/javax/print/PrintService.h>
#include <scapix/java_api/javax/print/attribute/PrintRequestAttributeSet.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::print::ServiceUI : public jni::object_base<"javax/print/ServiceUI",
	java::lang::Object>
{
public:

	static jni::ref<javax::print::ServiceUI> new_object() { return base_::new_object(); }
	static jni::ref<javax::print::PrintService> printDialog(jni::ref<java::awt::GraphicsConfiguration> p1, jint p2, jint p3, jni::ref<jni::array<javax::print::PrintService>> p4, jni::ref<javax::print::PrintService> p5, jni::ref<javax::print::DocFlavor> p6, jni::ref<javax::print::attribute::PrintRequestAttributeSet> p7) { return call_static_method<"printDialog", jni::ref<javax::print::PrintService>>(p1, p2, p3, p4, p5, p6, p7); }

protected:

	ServiceUI(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_PRINT_SERVICEUI
