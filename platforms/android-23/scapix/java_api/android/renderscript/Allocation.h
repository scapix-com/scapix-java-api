// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/renderscript/BaseObj.h>

#ifndef SCAPIX_JAVA_API_ANDROID_RENDERSCRIPT_ALLOCATION_FWD
#define SCAPIX_JAVA_API_ANDROID_RENDERSCRIPT_ALLOCATION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::renderscript { class Allocation; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::renderscript::Allocation>
{
	static constexpr fixed_string class_name = "android/renderscript/Allocation";
	using base_classes = std::tuple<scapix::java_api::android::renderscript::BaseObj>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_RENDERSCRIPT_ALLOCATION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_RENDERSCRIPT_ALLOCATION)
#define SCAPIX_JAVA_API_ANDROID_RENDERSCRIPT_ALLOCATION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/res/Resources.h>
#include <scapix/java_api/android/graphics/Bitmap.h>
#include <scapix/java_api/android/renderscript/Allocation_MipmapControl.h>
#include <scapix/java_api/android/renderscript/Allocation_OnBufferAvailableListener.h>
#include <scapix/java_api/android/renderscript/Element.h>
#include <scapix/java_api/android/renderscript/FieldPacker.h>
#include <scapix/java_api/android/renderscript/RenderScript.h>
#include <scapix/java_api/android/renderscript/Type.h>
#include <scapix/java_api/android/view/Surface.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::renderscript::Allocation : public jni::object_base<"android/renderscript/Allocation",
	android::renderscript::BaseObj>
{
public:

	using OnBufferAvailableListener = Allocation_OnBufferAvailableListener;
	using MipmapControl = Allocation_MipmapControl;

	static jint USAGE_GRAPHICS_CONSTANTS() { return get_static_field<"USAGE_GRAPHICS_CONSTANTS", jint>(); }
	static jint USAGE_GRAPHICS_RENDER_TARGET() { return get_static_field<"USAGE_GRAPHICS_RENDER_TARGET", jint>(); }
	static jint USAGE_GRAPHICS_TEXTURE() { return get_static_field<"USAGE_GRAPHICS_TEXTURE", jint>(); }
	static jint USAGE_GRAPHICS_VERTEX() { return get_static_field<"USAGE_GRAPHICS_VERTEX", jint>(); }
	static jint USAGE_IO_INPUT() { return get_static_field<"USAGE_IO_INPUT", jint>(); }
	static jint USAGE_IO_OUTPUT() { return get_static_field<"USAGE_IO_OUTPUT", jint>(); }
	static jint USAGE_SCRIPT() { return get_static_field<"USAGE_SCRIPT", jint>(); }
	static jint USAGE_SHARED() { return get_static_field<"USAGE_SHARED", jint>(); }

	jni::ref<android::renderscript::Element> getElement() { return call_method<"getElement", jni::ref<android::renderscript::Element>>(); }
	jint getUsage() { return call_method<"getUsage", jint>(); }
	void setAutoPadding(jboolean useAutoPadding) { return call_method<"setAutoPadding", void>(useAutoPadding); }
	jint getBytesSize() { return call_method<"getBytesSize", jint>(); }
	jni::ref<android::renderscript::Type> getType() { return call_method<"getType", jni::ref<android::renderscript::Type>>(); }
	void syncAll(jint srcLocation) { return call_method<"syncAll", void>(srcLocation); }
	void ioSend() { return call_method<"ioSend", void>(); }
	void ioReceive() { return call_method<"ioReceive", void>(); }
	void copyFrom(jni::ref<jni::array<android::renderscript::BaseObj>> d) { return call_method<"copyFrom", void>(d); }
	void copyFromUnchecked(jni::ref<java::lang::Object> array) { return call_method<"copyFromUnchecked", void>(array); }
	void copyFromUnchecked(jni::ref<jni::array<jint>> d) { return call_method<"copyFromUnchecked", void>(d); }
	void copyFromUnchecked(jni::ref<jni::array<jshort>> d) { return call_method<"copyFromUnchecked", void>(d); }
	void copyFromUnchecked(jni::ref<jni::array<jbyte>> d) { return call_method<"copyFromUnchecked", void>(d); }
	void copyFromUnchecked(jni::ref<jni::array<jfloat>> d) { return call_method<"copyFromUnchecked", void>(d); }
	void copyFrom(jni::ref<java::lang::Object> array) { return call_method<"copyFrom", void>(array); }
	void copyFrom(jni::ref<jni::array<jint>> d) { return call_method<"copyFrom", void>(d); }
	void copyFrom(jni::ref<jni::array<jshort>> d) { return call_method<"copyFrom", void>(d); }
	void copyFrom(jni::ref<jni::array<jbyte>> d) { return call_method<"copyFrom", void>(d); }
	void copyFrom(jni::ref<jni::array<jfloat>> d) { return call_method<"copyFrom", void>(d); }
	void copyFrom(jni::ref<android::graphics::Bitmap> b) { return call_method<"copyFrom", void>(b); }
	void copyFrom(jni::ref<android::renderscript::Allocation> a) { return call_method<"copyFrom", void>(a); }
	void setFromFieldPacker(jint xoff, jni::ref<android::renderscript::FieldPacker> fp) { return call_method<"setFromFieldPacker", void>(xoff, fp); }
	void setFromFieldPacker(jint xoff, jint component_number, jni::ref<android::renderscript::FieldPacker> fp) { return call_method<"setFromFieldPacker", void>(xoff, component_number, fp); }
	void setFromFieldPacker(jint xoff, jint yoff, jint zoff, jint component_number, jni::ref<android::renderscript::FieldPacker> fp) { return call_method<"setFromFieldPacker", void>(xoff, yoff, zoff, component_number, fp); }
	void generateMipmaps() { return call_method<"generateMipmaps", void>(); }
	void copy1DRangeFromUnchecked(jint off, jint count, jni::ref<java::lang::Object> array) { return call_method<"copy1DRangeFromUnchecked", void>(off, count, array); }
	void copy1DRangeFromUnchecked(jint off, jint count, jni::ref<jni::array<jint>> d) { return call_method<"copy1DRangeFromUnchecked", void>(off, count, d); }
	void copy1DRangeFromUnchecked(jint off, jint count, jni::ref<jni::array<jshort>> d) { return call_method<"copy1DRangeFromUnchecked", void>(off, count, d); }
	void copy1DRangeFromUnchecked(jint off, jint count, jni::ref<jni::array<jbyte>> d) { return call_method<"copy1DRangeFromUnchecked", void>(off, count, d); }
	void copy1DRangeFromUnchecked(jint off, jint count, jni::ref<jni::array<jfloat>> d) { return call_method<"copy1DRangeFromUnchecked", void>(off, count, d); }
	void copy1DRangeFrom(jint off, jint count, jni::ref<java::lang::Object> array) { return call_method<"copy1DRangeFrom", void>(off, count, array); }
	void copy1DRangeFrom(jint off, jint count, jni::ref<jni::array<jint>> d) { return call_method<"copy1DRangeFrom", void>(off, count, d); }
	void copy1DRangeFrom(jint off, jint count, jni::ref<jni::array<jshort>> d) { return call_method<"copy1DRangeFrom", void>(off, count, d); }
	void copy1DRangeFrom(jint off, jint count, jni::ref<jni::array<jbyte>> d) { return call_method<"copy1DRangeFrom", void>(off, count, d); }
	void copy1DRangeFrom(jint off, jint count, jni::ref<jni::array<jfloat>> d) { return call_method<"copy1DRangeFrom", void>(off, count, d); }
	void copy1DRangeFrom(jint off, jint count, jni::ref<android::renderscript::Allocation> data, jint dataOff) { return call_method<"copy1DRangeFrom", void>(off, count, data, dataOff); }
	void copy2DRangeFrom(jint xoff, jint yoff, jint w, jint h, jni::ref<java::lang::Object> array) { return call_method<"copy2DRangeFrom", void>(xoff, yoff, w, h, array); }
	void copy2DRangeFrom(jint xoff, jint yoff, jint w, jint h, jni::ref<jni::array<jbyte>> data) { return call_method<"copy2DRangeFrom", void>(xoff, yoff, w, h, data); }
	void copy2DRangeFrom(jint xoff, jint yoff, jint w, jint h, jni::ref<jni::array<jshort>> data) { return call_method<"copy2DRangeFrom", void>(xoff, yoff, w, h, data); }
	void copy2DRangeFrom(jint xoff, jint yoff, jint w, jint h, jni::ref<jni::array<jint>> data) { return call_method<"copy2DRangeFrom", void>(xoff, yoff, w, h, data); }
	void copy2DRangeFrom(jint xoff, jint yoff, jint w, jint h, jni::ref<jni::array<jfloat>> data) { return call_method<"copy2DRangeFrom", void>(xoff, yoff, w, h, data); }
	void copy2DRangeFrom(jint xoff, jint yoff, jint w, jint h, jni::ref<android::renderscript::Allocation> data, jint dataXoff, jint dataYoff) { return call_method<"copy2DRangeFrom", void>(xoff, yoff, w, h, data, dataXoff, dataYoff); }
	void copy2DRangeFrom(jint xoff, jint yoff, jni::ref<android::graphics::Bitmap> data) { return call_method<"copy2DRangeFrom", void>(xoff, yoff, data); }
	void copy3DRangeFrom(jint xoff, jint yoff, jint zoff, jint w, jint h, jint d, jni::ref<java::lang::Object> array) { return call_method<"copy3DRangeFrom", void>(xoff, yoff, zoff, w, h, d, array); }
	void copy3DRangeFrom(jint xoff, jint yoff, jint zoff, jint w, jint h, jint d, jni::ref<android::renderscript::Allocation> data, jint dataXoff, jint dataYoff, jint dataZoff) { return call_method<"copy3DRangeFrom", void>(xoff, yoff, zoff, w, h, d, data, dataXoff, dataYoff, dataZoff); }
	void copyTo(jni::ref<android::graphics::Bitmap> b) { return call_method<"copyTo", void>(b); }
	void copyTo(jni::ref<java::lang::Object> array) { return call_method<"copyTo", void>(array); }
	void copyTo(jni::ref<jni::array<jbyte>> d) { return call_method<"copyTo", void>(d); }
	void copyTo(jni::ref<jni::array<jshort>> d) { return call_method<"copyTo", void>(d); }
	void copyTo(jni::ref<jni::array<jint>> d) { return call_method<"copyTo", void>(d); }
	void copyTo(jni::ref<jni::array<jfloat>> d) { return call_method<"copyTo", void>(d); }
	void resize(jint dimX) { return call_method<"resize", void>(dimX); }
	void copy1DRangeToUnchecked(jint off, jint count, jni::ref<java::lang::Object> array) { return call_method<"copy1DRangeToUnchecked", void>(off, count, array); }
	void copy1DRangeToUnchecked(jint off, jint count, jni::ref<jni::array<jint>> d) { return call_method<"copy1DRangeToUnchecked", void>(off, count, d); }
	void copy1DRangeToUnchecked(jint off, jint count, jni::ref<jni::array<jshort>> d) { return call_method<"copy1DRangeToUnchecked", void>(off, count, d); }
	void copy1DRangeToUnchecked(jint off, jint count, jni::ref<jni::array<jbyte>> d) { return call_method<"copy1DRangeToUnchecked", void>(off, count, d); }
	void copy1DRangeToUnchecked(jint off, jint count, jni::ref<jni::array<jfloat>> d) { return call_method<"copy1DRangeToUnchecked", void>(off, count, d); }
	void copy1DRangeTo(jint off, jint count, jni::ref<java::lang::Object> array) { return call_method<"copy1DRangeTo", void>(off, count, array); }
	void copy1DRangeTo(jint off, jint count, jni::ref<jni::array<jint>> d) { return call_method<"copy1DRangeTo", void>(off, count, d); }
	void copy1DRangeTo(jint off, jint count, jni::ref<jni::array<jshort>> d) { return call_method<"copy1DRangeTo", void>(off, count, d); }
	void copy1DRangeTo(jint off, jint count, jni::ref<jni::array<jbyte>> d) { return call_method<"copy1DRangeTo", void>(off, count, d); }
	void copy1DRangeTo(jint off, jint count, jni::ref<jni::array<jfloat>> d) { return call_method<"copy1DRangeTo", void>(off, count, d); }
	void copy2DRangeTo(jint xoff, jint yoff, jint w, jint h, jni::ref<java::lang::Object> array) { return call_method<"copy2DRangeTo", void>(xoff, yoff, w, h, array); }
	void copy2DRangeTo(jint xoff, jint yoff, jint w, jint h, jni::ref<jni::array<jbyte>> data) { return call_method<"copy2DRangeTo", void>(xoff, yoff, w, h, data); }
	void copy2DRangeTo(jint xoff, jint yoff, jint w, jint h, jni::ref<jni::array<jshort>> data) { return call_method<"copy2DRangeTo", void>(xoff, yoff, w, h, data); }
	void copy2DRangeTo(jint xoff, jint yoff, jint w, jint h, jni::ref<jni::array<jint>> data) { return call_method<"copy2DRangeTo", void>(xoff, yoff, w, h, data); }
	void copy2DRangeTo(jint xoff, jint yoff, jint w, jint h, jni::ref<jni::array<jfloat>> data) { return call_method<"copy2DRangeTo", void>(xoff, yoff, w, h, data); }
	void copy3DRangeTo(jint xoff, jint yoff, jint zoff, jint w, jint h, jint d, jni::ref<java::lang::Object> array) { return call_method<"copy3DRangeTo", void>(xoff, yoff, zoff, w, h, d, array); }
	static jni::ref<android::renderscript::Allocation> createTyped(jni::ref<android::renderscript::RenderScript> rs, jni::ref<android::renderscript::Type> type, jni::ref<android::renderscript::Allocation_MipmapControl> mips, jint usage) { return call_static_method<"createTyped", jni::ref<android::renderscript::Allocation>>(rs, type, mips, usage); }
	static jni::ref<android::renderscript::Allocation> createTyped(jni::ref<android::renderscript::RenderScript> rs, jni::ref<android::renderscript::Type> type, jint usage) { return call_static_method<"createTyped", jni::ref<android::renderscript::Allocation>>(rs, type, usage); }
	static jni::ref<android::renderscript::Allocation> createTyped(jni::ref<android::renderscript::RenderScript> rs, jni::ref<android::renderscript::Type> type) { return call_static_method<"createTyped", jni::ref<android::renderscript::Allocation>>(rs, type); }
	static jni::ref<android::renderscript::Allocation> createSized(jni::ref<android::renderscript::RenderScript> rs, jni::ref<android::renderscript::Element> e, jint count, jint usage) { return call_static_method<"createSized", jni::ref<android::renderscript::Allocation>>(rs, e, count, usage); }
	static jni::ref<android::renderscript::Allocation> createSized(jni::ref<android::renderscript::RenderScript> rs, jni::ref<android::renderscript::Element> e, jint count) { return call_static_method<"createSized", jni::ref<android::renderscript::Allocation>>(rs, e, count); }
	static jni::ref<android::renderscript::Allocation> createFromBitmap(jni::ref<android::renderscript::RenderScript> rs, jni::ref<android::graphics::Bitmap> b, jni::ref<android::renderscript::Allocation_MipmapControl> mips, jint usage) { return call_static_method<"createFromBitmap", jni::ref<android::renderscript::Allocation>>(rs, b, mips, usage); }
	jni::ref<android::view::Surface> getSurface() { return call_method<"getSurface", jni::ref<android::view::Surface>>(); }
	void setSurface(jni::ref<android::view::Surface> sur) { return call_method<"setSurface", void>(sur); }
	static jni::ref<android::renderscript::Allocation> createFromBitmap(jni::ref<android::renderscript::RenderScript> rs, jni::ref<android::graphics::Bitmap> b) { return call_static_method<"createFromBitmap", jni::ref<android::renderscript::Allocation>>(rs, b); }
	static jni::ref<android::renderscript::Allocation> createCubemapFromBitmap(jni::ref<android::renderscript::RenderScript> rs, jni::ref<android::graphics::Bitmap> b, jni::ref<android::renderscript::Allocation_MipmapControl> mips, jint usage) { return call_static_method<"createCubemapFromBitmap", jni::ref<android::renderscript::Allocation>>(rs, b, mips, usage); }
	static jni::ref<android::renderscript::Allocation> createCubemapFromBitmap(jni::ref<android::renderscript::RenderScript> rs, jni::ref<android::graphics::Bitmap> b) { return call_static_method<"createCubemapFromBitmap", jni::ref<android::renderscript::Allocation>>(rs, b); }
	static jni::ref<android::renderscript::Allocation> createCubemapFromCubeFaces(jni::ref<android::renderscript::RenderScript> rs, jni::ref<android::graphics::Bitmap> xpos, jni::ref<android::graphics::Bitmap> xneg, jni::ref<android::graphics::Bitmap> ypos, jni::ref<android::graphics::Bitmap> yneg, jni::ref<android::graphics::Bitmap> zpos, jni::ref<android::graphics::Bitmap> zneg, jni::ref<android::renderscript::Allocation_MipmapControl> mips, jint usage) { return call_static_method<"createCubemapFromCubeFaces", jni::ref<android::renderscript::Allocation>>(rs, xpos, xneg, ypos, yneg, zpos, zneg, mips, usage); }
	static jni::ref<android::renderscript::Allocation> createCubemapFromCubeFaces(jni::ref<android::renderscript::RenderScript> rs, jni::ref<android::graphics::Bitmap> xpos, jni::ref<android::graphics::Bitmap> xneg, jni::ref<android::graphics::Bitmap> ypos, jni::ref<android::graphics::Bitmap> yneg, jni::ref<android::graphics::Bitmap> zpos, jni::ref<android::graphics::Bitmap> zneg) { return call_static_method<"createCubemapFromCubeFaces", jni::ref<android::renderscript::Allocation>>(rs, xpos, xneg, ypos, yneg, zpos, zneg); }
	static jni::ref<android::renderscript::Allocation> createFromBitmapResource(jni::ref<android::renderscript::RenderScript> rs, jni::ref<android::content::res::Resources> res, jint id, jni::ref<android::renderscript::Allocation_MipmapControl> mips, jint usage) { return call_static_method<"createFromBitmapResource", jni::ref<android::renderscript::Allocation>>(rs, res, id, mips, usage); }
	static jni::ref<android::renderscript::Allocation> createFromBitmapResource(jni::ref<android::renderscript::RenderScript> rs, jni::ref<android::content::res::Resources> res, jint id) { return call_static_method<"createFromBitmapResource", jni::ref<android::renderscript::Allocation>>(rs, res, id); }
	static jni::ref<android::renderscript::Allocation> createFromString(jni::ref<android::renderscript::RenderScript> rs, jni::ref<java::lang::String> str, jint usage) { return call_static_method<"createFromString", jni::ref<android::renderscript::Allocation>>(rs, str, usage); }
	void setOnBufferAvailableListener(jni::ref<android::renderscript::Allocation_OnBufferAvailableListener> callback) { return call_method<"setOnBufferAvailableListener", void>(callback); }
	void destroy() { return call_method<"destroy", void>(); }

protected:

	Allocation(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_RENDERSCRIPT_ALLOCATION
