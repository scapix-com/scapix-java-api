// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/print/PrintService.h>
#include <scapix/java_api/sun/print/AttributeUpdater.h>
#include <scapix/java_api/sun/print/SunPrinterJobService.h>

#ifndef SCAPIX_JAVA_API_SUN_PRINT_WIN32PRINTSERVICE_FWD
#define SCAPIX_JAVA_API_SUN_PRINT_WIN32PRINTSERVICE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::print { class Win32PrintService; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::print::Win32PrintService>
{
	static constexpr fixed_string class_name = "sun/print/Win32PrintService";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::javax::print::PrintService, scapix::java_api::sun::print::AttributeUpdater, scapix::java_api::sun::print::SunPrinterJobService>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_PRINT_WIN32PRINTSERVICE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_PRINT_WIN32PRINTSERVICE)
#define SCAPIX_JAVA_API_SUN_PRINT_WIN32PRINTSERVICE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/print/DocFlavor.h>
#include <scapix/java_api/javax/print/DocPrintJob.h>
#include <scapix/java_api/javax/print/ServiceUIFactory.h>
#include <scapix/java_api/javax/print/attribute/Attribute.h>
#include <scapix/java_api/javax/print/attribute/AttributeSet.h>
#include <scapix/java_api/javax/print/attribute/PrintServiceAttribute.h>
#include <scapix/java_api/javax/print/attribute/PrintServiceAttributeSet.h>
#include <scapix/java_api/javax/print/attribute/standard/MediaSize.h>
#include <scapix/java_api/javax/print/attribute/standard/MediaSizeName.h>
#include <scapix/java_api/javax/print/attribute/standard/MediaTray.h>
#include <scapix/java_api/javax/print/event/PrintServiceAttributeListener.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::print::Win32PrintService : public jni::object_base<"sun/print/Win32PrintService",
	java::lang::Object,
	javax::print::PrintService,
	sun::print::AttributeUpdater,
	sun::print::SunPrinterJobService>
{
public:

	static jni::ref<jni::array<javax::print::attribute::standard::MediaSize>> predefMedia() { return get_static_field<"predefMedia", jni::ref<jni::array<javax::print::attribute::standard::MediaSize>>>(); }
	static void predefMedia(jni::ref<jni::array<javax::print::attribute::standard::MediaSize>> v) { set_static_field<"predefMedia", jni::ref<jni::array<javax::print::attribute::standard::MediaSize>>>(v); }
	static jni::ref<jni::array<javax::print::attribute::standard::MediaSizeName>> dmPaperToPrintService() { return get_static_field<"dmPaperToPrintService", jni::ref<jni::array<javax::print::attribute::standard::MediaSizeName>>>(); }

	void invalidateService() { return call_method<"invalidateService", void>(); }
	jni::ref<java::lang::String> getName() { return call_method<"getName", jni::ref<java::lang::String>>(); }
	jint findPaperID(jni::ref<javax::print::attribute::standard::MediaSizeName> p1) { return call_method<"findPaperID", jint>(p1); }
	jint findTrayID(jni::ref<javax::print::attribute::standard::MediaTray> p1) { return call_method<"findTrayID", jint>(p1); }
	jni::ref<javax::print::attribute::standard::MediaTray> findMediaTray(jint p1) { return call_method<"findMediaTray", jni::ref<javax::print::attribute::standard::MediaTray>>(p1); }
	jni::ref<javax::print::attribute::standard::MediaSizeName> findWin32Media(jint p1) { return call_method<"findWin32Media", jni::ref<javax::print::attribute::standard::MediaSizeName>>(p1); }
	jni::ref<javax::print::attribute::standard::MediaSizeName> findMatchingMediaSizeNameMM(jfloat p1, jfloat p2) { return call_method<"findMatchingMediaSizeNameMM", jni::ref<javax::print::attribute::standard::MediaSizeName>>(p1, p2); }
	jni::ref<javax::print::DocPrintJob> createPrintJob() { return call_method<"createPrintJob", jni::ref<javax::print::DocPrintJob>>(); }
	jni::ref<javax::print::attribute::PrintServiceAttributeSet> getUpdatedAttributes() { return call_method<"getUpdatedAttributes", jni::ref<javax::print::attribute::PrintServiceAttributeSet>>(); }
	void wakeNotifier() { return call_method<"wakeNotifier", void>(); }
	void addPrintServiceAttributeListener(jni::ref<javax::print::event::PrintServiceAttributeListener> p1) { return call_method<"addPrintServiceAttributeListener", void>(p1); }
	void removePrintServiceAttributeListener(jni::ref<javax::print::event::PrintServiceAttributeListener> p1) { return call_method<"removePrintServiceAttributeListener", void>(p1); }
	jni::ref<javax::print::attribute::PrintServiceAttribute> getAttribute(jni::ref<java::lang::Class> p1) { return call_method<"getAttribute", jni::ref<javax::print::attribute::PrintServiceAttribute>>(p1); }
	jni::ref<javax::print::attribute::PrintServiceAttributeSet> getAttributes() { return call_method<"getAttributes", jni::ref<javax::print::attribute::PrintServiceAttributeSet>>(); }
	jni::ref<jni::array<javax::print::DocFlavor>> getSupportedDocFlavors() { return call_method<"getSupportedDocFlavors", jni::ref<jni::array<javax::print::DocFlavor>>>(); }
	jboolean isDocFlavorSupported(jni::ref<javax::print::DocFlavor> p1) { return call_method<"isDocFlavorSupported", jboolean>(p1); }
	jni::ref<jni::array<java::lang::Class>> getSupportedAttributeCategories() { return call_method<"getSupportedAttributeCategories", jni::ref<jni::array<java::lang::Class>>>(); }
	jboolean isAttributeCategorySupported(jni::ref<java::lang::Class> p1) { return call_method<"isAttributeCategorySupported", jboolean>(p1); }
	jni::ref<java::lang::Object> getDefaultAttributeValue(jni::ref<java::lang::Class> p1) { return call_method<"getDefaultAttributeValue", jni::ref<java::lang::Object>>(p1); }
	jni::ref<java::lang::Object> getSupportedAttributeValues(jni::ref<java::lang::Class> p1, jni::ref<javax::print::DocFlavor> p2, jni::ref<javax::print::attribute::AttributeSet> p3) { return call_method<"getSupportedAttributeValues", jni::ref<java::lang::Object>>(p1, p2, p3); }
	jboolean isAttributeValueSupported(jni::ref<javax::print::attribute::Attribute> p1, jni::ref<javax::print::DocFlavor> p2, jni::ref<javax::print::attribute::AttributeSet> p3) { return call_method<"isAttributeValueSupported", jboolean>(p1, p2, p3); }
	jni::ref<javax::print::attribute::AttributeSet> getUnsupportedAttributes(jni::ref<javax::print::DocFlavor> p1, jni::ref<javax::print::attribute::AttributeSet> p2) { return call_method<"getUnsupportedAttributes", jni::ref<javax::print::attribute::AttributeSet>>(p1, p2); }
	jni::ref<javax::print::ServiceUIFactory> getServiceUIFactory() { return call_method<"getServiceUIFactory", jni::ref<javax::print::ServiceUIFactory>>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean usesClass(jni::ref<java::lang::Class> p1) { return call_method<"usesClass", jboolean>(p1); }

protected:

	Win32PrintService(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_PRINT_WIN32PRINTSERVICE
