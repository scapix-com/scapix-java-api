// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/AutoCloseable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_GRAPHICS_PDF_PDFRENDERER_PAGE_FWD
#define SCAPIX_JAVA_API_ANDROID_GRAPHICS_PDF_PDFRENDERER_PAGE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::graphics::pdf { class PdfRenderer_Page; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::graphics::pdf::PdfRenderer_Page>
{
	static constexpr fixed_string class_name = "android/graphics/pdf/PdfRenderer$Page";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::AutoCloseable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_GRAPHICS_PDF_PDFRENDERER_PAGE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_GRAPHICS_PDF_PDFRENDERER_PAGE)
#define SCAPIX_JAVA_API_ANDROID_GRAPHICS_PDF_PDFRENDERER_PAGE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/graphics/Bitmap.h>
#include <scapix/java_api/android/graphics/Matrix.h>
#include <scapix/java_api/android/graphics/Rect.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::graphics::pdf::PdfRenderer_Page : public jni::object_base<"android/graphics/pdf/PdfRenderer$Page",
	java::lang::Object,
	java::lang::AutoCloseable>
{
public:

	static jint RENDER_MODE_FOR_DISPLAY() { return get_static_field<"RENDER_MODE_FOR_DISPLAY", jint>(); }
	static jint RENDER_MODE_FOR_PRINT() { return get_static_field<"RENDER_MODE_FOR_PRINT", jint>(); }

	jint getIndex() { return call_method<"getIndex", jint>(); }
	jint getWidth() { return call_method<"getWidth", jint>(); }
	jint getHeight() { return call_method<"getHeight", jint>(); }
	void render(jni::ref<android::graphics::Bitmap> destination, jni::ref<android::graphics::Rect> destClip, jni::ref<android::graphics::Matrix> transform, jint renderMode) { return call_method<"render", void>(destination, destClip, transform, renderMode); }
	void close() { return call_method<"close", void>(); }

protected:

	PdfRenderer_Page(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_GRAPHICS_PDF_PDFRENDERER_PAGE
