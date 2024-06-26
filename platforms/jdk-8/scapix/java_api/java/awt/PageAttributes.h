// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/Cloneable.h>

#ifndef SCAPIX_JAVA_API_JAVA_AWT_PAGEATTRIBUTES_FWD
#define SCAPIX_JAVA_API_JAVA_AWT_PAGEATTRIBUTES_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::awt { class PageAttributes; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::awt::PageAttributes>
{
	static constexpr fixed_string class_name = "java/awt/PageAttributes";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::Cloneable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_PAGEATTRIBUTES_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_AWT_PAGEATTRIBUTES)
#define SCAPIX_JAVA_API_JAVA_AWT_PAGEATTRIBUTES

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/PageAttributes_ColorType.h>
#include <scapix/java_api/java/awt/PageAttributes_MediaType.h>
#include <scapix/java_api/java/awt/PageAttributes_OrientationRequestedType.h>
#include <scapix/java_api/java/awt/PageAttributes_OriginType.h>
#include <scapix/java_api/java/awt/PageAttributes_PrintQualityType.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::awt::PageAttributes : public jni::object_base<"java/awt/PageAttributes",
	java::lang::Object,
	java::lang::Cloneable>
{
public:

	using ColorType = PageAttributes_ColorType;
	using MediaType = PageAttributes_MediaType;
	using OrientationRequestedType = PageAttributes_OrientationRequestedType;
	using OriginType = PageAttributes_OriginType;
	using PrintQualityType = PageAttributes_PrintQualityType;

	static jni::ref<java::awt::PageAttributes> new_object() { return base_::new_object(); }
	static jni::ref<java::awt::PageAttributes> new_object(jni::ref<java::awt::PageAttributes> p1) { return base_::new_object(p1); }
	static jni::ref<java::awt::PageAttributes> new_object(jni::ref<java::awt::PageAttributes_ColorType> p1, jni::ref<java::awt::PageAttributes_MediaType> p2, jni::ref<java::awt::PageAttributes_OrientationRequestedType> p3, jni::ref<java::awt::PageAttributes_OriginType> p4, jni::ref<java::awt::PageAttributes_PrintQualityType> p5, jni::ref<jni::array<jint>> p6) { return base_::new_object(p1, p2, p3, p4, p5, p6); }
	jni::ref<java::lang::Object> clone() { return call_method<"clone", jni::ref<java::lang::Object>>(); }
	void set(jni::ref<java::awt::PageAttributes> p1) { return call_method<"set", void>(p1); }
	jni::ref<java::awt::PageAttributes_ColorType> getColor() { return call_method<"getColor", jni::ref<java::awt::PageAttributes_ColorType>>(); }
	void setColor(jni::ref<java::awt::PageAttributes_ColorType> p1) { return call_method<"setColor", void>(p1); }
	jni::ref<java::awt::PageAttributes_MediaType> getMedia() { return call_method<"getMedia", jni::ref<java::awt::PageAttributes_MediaType>>(); }
	void setMedia(jni::ref<java::awt::PageAttributes_MediaType> p1) { return call_method<"setMedia", void>(p1); }
	void setMediaToDefault() { return call_method<"setMediaToDefault", void>(); }
	jni::ref<java::awt::PageAttributes_OrientationRequestedType> getOrientationRequested() { return call_method<"getOrientationRequested", jni::ref<java::awt::PageAttributes_OrientationRequestedType>>(); }
	void setOrientationRequested(jni::ref<java::awt::PageAttributes_OrientationRequestedType> p1) { return call_method<"setOrientationRequested", void>(p1); }
	void setOrientationRequested(jint p1) { return call_method<"setOrientationRequested", void>(p1); }
	void setOrientationRequestedToDefault() { return call_method<"setOrientationRequestedToDefault", void>(); }
	jni::ref<java::awt::PageAttributes_OriginType> getOrigin() { return call_method<"getOrigin", jni::ref<java::awt::PageAttributes_OriginType>>(); }
	void setOrigin(jni::ref<java::awt::PageAttributes_OriginType> p1) { return call_method<"setOrigin", void>(p1); }
	jni::ref<java::awt::PageAttributes_PrintQualityType> getPrintQuality() { return call_method<"getPrintQuality", jni::ref<java::awt::PageAttributes_PrintQualityType>>(); }
	void setPrintQuality(jni::ref<java::awt::PageAttributes_PrintQualityType> p1) { return call_method<"setPrintQuality", void>(p1); }
	void setPrintQuality(jint p1) { return call_method<"setPrintQuality", void>(p1); }
	void setPrintQualityToDefault() { return call_method<"setPrintQualityToDefault", void>(); }
	jni::ref<jni::array<jint>> getPrinterResolution() { return call_method<"getPrinterResolution", jni::ref<jni::array<jint>>>(); }
	void setPrinterResolution(jni::ref<jni::array<jint>> p1) { return call_method<"setPrinterResolution", void>(p1); }
	void setPrinterResolution(jint p1) { return call_method<"setPrinterResolution", void>(p1); }
	void setPrinterResolutionToDefault() { return call_method<"setPrinterResolutionToDefault", void>(); }
	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	PageAttributes(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_PAGEATTRIBUTES
