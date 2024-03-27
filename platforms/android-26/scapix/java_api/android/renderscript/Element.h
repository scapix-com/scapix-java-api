// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/renderscript/BaseObj.h>

#ifndef SCAPIX_JAVA_API_ANDROID_RENDERSCRIPT_ELEMENT_FWD
#define SCAPIX_JAVA_API_ANDROID_RENDERSCRIPT_ELEMENT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::renderscript { class Element; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::renderscript::Element>
{
	static constexpr fixed_string class_name = "android/renderscript/Element";
	using base_classes = std::tuple<scapix::java_api::android::renderscript::BaseObj>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_RENDERSCRIPT_ELEMENT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_RENDERSCRIPT_ELEMENT)
#define SCAPIX_JAVA_API_ANDROID_RENDERSCRIPT_ELEMENT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/renderscript/Element_DataKind.h>
#include <scapix/java_api/android/renderscript/Element_DataType.h>
#include <scapix/java_api/android/renderscript/RenderScript.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/android/renderscript/Element_Builder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::renderscript::Element : public jni::object_base<"android/renderscript/Element",
	android::renderscript::BaseObj>
{
public:

	using Builder = Element_Builder;
	using DataKind = Element_DataKind;
	using DataType = Element_DataType;

	jint getBytesSize() { return call_method<"getBytesSize", jint>(); }
	jint getVectorSize() { return call_method<"getVectorSize", jint>(); }
	jboolean isComplex() { return call_method<"isComplex", jboolean>(); }
	jint getSubElementCount() { return call_method<"getSubElementCount", jint>(); }
	jni::ref<android::renderscript::Element> getSubElement(jint index) { return call_method<"getSubElement", jni::ref<android::renderscript::Element>>(index); }
	jni::ref<java::lang::String> getSubElementName(jint index) { return call_method<"getSubElementName", jni::ref<java::lang::String>>(index); }
	jint getSubElementArraySize(jint index) { return call_method<"getSubElementArraySize", jint>(index); }
	jint getSubElementOffsetBytes(jint index) { return call_method<"getSubElementOffsetBytes", jint>(index); }
	jni::ref<android::renderscript::Element_DataType> getDataType() { return call_method<"getDataType", jni::ref<android::renderscript::Element_DataType>>(); }
	jni::ref<android::renderscript::Element_DataKind> getDataKind() { return call_method<"getDataKind", jni::ref<android::renderscript::Element_DataKind>>(); }
	static jni::ref<android::renderscript::Element> BOOLEAN(jni::ref<android::renderscript::RenderScript> rs) { return call_static_method<"BOOLEAN", jni::ref<android::renderscript::Element>>(rs); }
	static jni::ref<android::renderscript::Element> U8(jni::ref<android::renderscript::RenderScript> rs) { return call_static_method<"U8", jni::ref<android::renderscript::Element>>(rs); }
	static jni::ref<android::renderscript::Element> I8(jni::ref<android::renderscript::RenderScript> rs) { return call_static_method<"I8", jni::ref<android::renderscript::Element>>(rs); }
	static jni::ref<android::renderscript::Element> U16(jni::ref<android::renderscript::RenderScript> rs) { return call_static_method<"U16", jni::ref<android::renderscript::Element>>(rs); }
	static jni::ref<android::renderscript::Element> I16(jni::ref<android::renderscript::RenderScript> rs) { return call_static_method<"I16", jni::ref<android::renderscript::Element>>(rs); }
	static jni::ref<android::renderscript::Element> U32(jni::ref<android::renderscript::RenderScript> rs) { return call_static_method<"U32", jni::ref<android::renderscript::Element>>(rs); }
	static jni::ref<android::renderscript::Element> I32(jni::ref<android::renderscript::RenderScript> rs) { return call_static_method<"I32", jni::ref<android::renderscript::Element>>(rs); }
	static jni::ref<android::renderscript::Element> U64(jni::ref<android::renderscript::RenderScript> rs) { return call_static_method<"U64", jni::ref<android::renderscript::Element>>(rs); }
	static jni::ref<android::renderscript::Element> I64(jni::ref<android::renderscript::RenderScript> rs) { return call_static_method<"I64", jni::ref<android::renderscript::Element>>(rs); }
	static jni::ref<android::renderscript::Element> F16(jni::ref<android::renderscript::RenderScript> rs) { return call_static_method<"F16", jni::ref<android::renderscript::Element>>(rs); }
	static jni::ref<android::renderscript::Element> F32(jni::ref<android::renderscript::RenderScript> rs) { return call_static_method<"F32", jni::ref<android::renderscript::Element>>(rs); }
	static jni::ref<android::renderscript::Element> F64(jni::ref<android::renderscript::RenderScript> rs) { return call_static_method<"F64", jni::ref<android::renderscript::Element>>(rs); }
	static jni::ref<android::renderscript::Element> ELEMENT(jni::ref<android::renderscript::RenderScript> rs) { return call_static_method<"ELEMENT", jni::ref<android::renderscript::Element>>(rs); }
	static jni::ref<android::renderscript::Element> TYPE(jni::ref<android::renderscript::RenderScript> rs) { return call_static_method<"TYPE", jni::ref<android::renderscript::Element>>(rs); }
	static jni::ref<android::renderscript::Element> ALLOCATION(jni::ref<android::renderscript::RenderScript> rs) { return call_static_method<"ALLOCATION", jni::ref<android::renderscript::Element>>(rs); }
	static jni::ref<android::renderscript::Element> SAMPLER(jni::ref<android::renderscript::RenderScript> rs) { return call_static_method<"SAMPLER", jni::ref<android::renderscript::Element>>(rs); }
	static jni::ref<android::renderscript::Element> SCRIPT(jni::ref<android::renderscript::RenderScript> rs) { return call_static_method<"SCRIPT", jni::ref<android::renderscript::Element>>(rs); }
	static jni::ref<android::renderscript::Element> MESH(jni::ref<android::renderscript::RenderScript> rs) { return call_static_method<"MESH", jni::ref<android::renderscript::Element>>(rs); }
	static jni::ref<android::renderscript::Element> PROGRAM_FRAGMENT(jni::ref<android::renderscript::RenderScript> rs) { return call_static_method<"PROGRAM_FRAGMENT", jni::ref<android::renderscript::Element>>(rs); }
	static jni::ref<android::renderscript::Element> PROGRAM_VERTEX(jni::ref<android::renderscript::RenderScript> rs) { return call_static_method<"PROGRAM_VERTEX", jni::ref<android::renderscript::Element>>(rs); }
	static jni::ref<android::renderscript::Element> PROGRAM_RASTER(jni::ref<android::renderscript::RenderScript> rs) { return call_static_method<"PROGRAM_RASTER", jni::ref<android::renderscript::Element>>(rs); }
	static jni::ref<android::renderscript::Element> PROGRAM_STORE(jni::ref<android::renderscript::RenderScript> rs) { return call_static_method<"PROGRAM_STORE", jni::ref<android::renderscript::Element>>(rs); }
	static jni::ref<android::renderscript::Element> FONT(jni::ref<android::renderscript::RenderScript> rs) { return call_static_method<"FONT", jni::ref<android::renderscript::Element>>(rs); }
	static jni::ref<android::renderscript::Element> A_8(jni::ref<android::renderscript::RenderScript> rs) { return call_static_method<"A_8", jni::ref<android::renderscript::Element>>(rs); }
	static jni::ref<android::renderscript::Element> RGB_565(jni::ref<android::renderscript::RenderScript> rs) { return call_static_method<"RGB_565", jni::ref<android::renderscript::Element>>(rs); }
	static jni::ref<android::renderscript::Element> RGB_888(jni::ref<android::renderscript::RenderScript> rs) { return call_static_method<"RGB_888", jni::ref<android::renderscript::Element>>(rs); }
	static jni::ref<android::renderscript::Element> RGBA_5551(jni::ref<android::renderscript::RenderScript> rs) { return call_static_method<"RGBA_5551", jni::ref<android::renderscript::Element>>(rs); }
	static jni::ref<android::renderscript::Element> RGBA_4444(jni::ref<android::renderscript::RenderScript> rs) { return call_static_method<"RGBA_4444", jni::ref<android::renderscript::Element>>(rs); }
	static jni::ref<android::renderscript::Element> RGBA_8888(jni::ref<android::renderscript::RenderScript> rs) { return call_static_method<"RGBA_8888", jni::ref<android::renderscript::Element>>(rs); }
	static jni::ref<android::renderscript::Element> F16_2(jni::ref<android::renderscript::RenderScript> rs) { return call_static_method<"F16_2", jni::ref<android::renderscript::Element>>(rs); }
	static jni::ref<android::renderscript::Element> F16_3(jni::ref<android::renderscript::RenderScript> rs) { return call_static_method<"F16_3", jni::ref<android::renderscript::Element>>(rs); }
	static jni::ref<android::renderscript::Element> F16_4(jni::ref<android::renderscript::RenderScript> rs) { return call_static_method<"F16_4", jni::ref<android::renderscript::Element>>(rs); }
	static jni::ref<android::renderscript::Element> F32_2(jni::ref<android::renderscript::RenderScript> rs) { return call_static_method<"F32_2", jni::ref<android::renderscript::Element>>(rs); }
	static jni::ref<android::renderscript::Element> F32_3(jni::ref<android::renderscript::RenderScript> rs) { return call_static_method<"F32_3", jni::ref<android::renderscript::Element>>(rs); }
	static jni::ref<android::renderscript::Element> F32_4(jni::ref<android::renderscript::RenderScript> rs) { return call_static_method<"F32_4", jni::ref<android::renderscript::Element>>(rs); }
	static jni::ref<android::renderscript::Element> F64_2(jni::ref<android::renderscript::RenderScript> rs) { return call_static_method<"F64_2", jni::ref<android::renderscript::Element>>(rs); }
	static jni::ref<android::renderscript::Element> F64_3(jni::ref<android::renderscript::RenderScript> rs) { return call_static_method<"F64_3", jni::ref<android::renderscript::Element>>(rs); }
	static jni::ref<android::renderscript::Element> F64_4(jni::ref<android::renderscript::RenderScript> rs) { return call_static_method<"F64_4", jni::ref<android::renderscript::Element>>(rs); }
	static jni::ref<android::renderscript::Element> U8_2(jni::ref<android::renderscript::RenderScript> rs) { return call_static_method<"U8_2", jni::ref<android::renderscript::Element>>(rs); }
	static jni::ref<android::renderscript::Element> U8_3(jni::ref<android::renderscript::RenderScript> rs) { return call_static_method<"U8_3", jni::ref<android::renderscript::Element>>(rs); }
	static jni::ref<android::renderscript::Element> U8_4(jni::ref<android::renderscript::RenderScript> rs) { return call_static_method<"U8_4", jni::ref<android::renderscript::Element>>(rs); }
	static jni::ref<android::renderscript::Element> I8_2(jni::ref<android::renderscript::RenderScript> rs) { return call_static_method<"I8_2", jni::ref<android::renderscript::Element>>(rs); }
	static jni::ref<android::renderscript::Element> I8_3(jni::ref<android::renderscript::RenderScript> rs) { return call_static_method<"I8_3", jni::ref<android::renderscript::Element>>(rs); }
	static jni::ref<android::renderscript::Element> I8_4(jni::ref<android::renderscript::RenderScript> rs) { return call_static_method<"I8_4", jni::ref<android::renderscript::Element>>(rs); }
	static jni::ref<android::renderscript::Element> U16_2(jni::ref<android::renderscript::RenderScript> rs) { return call_static_method<"U16_2", jni::ref<android::renderscript::Element>>(rs); }
	static jni::ref<android::renderscript::Element> U16_3(jni::ref<android::renderscript::RenderScript> rs) { return call_static_method<"U16_3", jni::ref<android::renderscript::Element>>(rs); }
	static jni::ref<android::renderscript::Element> U16_4(jni::ref<android::renderscript::RenderScript> rs) { return call_static_method<"U16_4", jni::ref<android::renderscript::Element>>(rs); }
	static jni::ref<android::renderscript::Element> I16_2(jni::ref<android::renderscript::RenderScript> rs) { return call_static_method<"I16_2", jni::ref<android::renderscript::Element>>(rs); }
	static jni::ref<android::renderscript::Element> I16_3(jni::ref<android::renderscript::RenderScript> rs) { return call_static_method<"I16_3", jni::ref<android::renderscript::Element>>(rs); }
	static jni::ref<android::renderscript::Element> I16_4(jni::ref<android::renderscript::RenderScript> rs) { return call_static_method<"I16_4", jni::ref<android::renderscript::Element>>(rs); }
	static jni::ref<android::renderscript::Element> U32_2(jni::ref<android::renderscript::RenderScript> rs) { return call_static_method<"U32_2", jni::ref<android::renderscript::Element>>(rs); }
	static jni::ref<android::renderscript::Element> U32_3(jni::ref<android::renderscript::RenderScript> rs) { return call_static_method<"U32_3", jni::ref<android::renderscript::Element>>(rs); }
	static jni::ref<android::renderscript::Element> U32_4(jni::ref<android::renderscript::RenderScript> rs) { return call_static_method<"U32_4", jni::ref<android::renderscript::Element>>(rs); }
	static jni::ref<android::renderscript::Element> I32_2(jni::ref<android::renderscript::RenderScript> rs) { return call_static_method<"I32_2", jni::ref<android::renderscript::Element>>(rs); }
	static jni::ref<android::renderscript::Element> I32_3(jni::ref<android::renderscript::RenderScript> rs) { return call_static_method<"I32_3", jni::ref<android::renderscript::Element>>(rs); }
	static jni::ref<android::renderscript::Element> I32_4(jni::ref<android::renderscript::RenderScript> rs) { return call_static_method<"I32_4", jni::ref<android::renderscript::Element>>(rs); }
	static jni::ref<android::renderscript::Element> U64_2(jni::ref<android::renderscript::RenderScript> rs) { return call_static_method<"U64_2", jni::ref<android::renderscript::Element>>(rs); }
	static jni::ref<android::renderscript::Element> U64_3(jni::ref<android::renderscript::RenderScript> rs) { return call_static_method<"U64_3", jni::ref<android::renderscript::Element>>(rs); }
	static jni::ref<android::renderscript::Element> U64_4(jni::ref<android::renderscript::RenderScript> rs) { return call_static_method<"U64_4", jni::ref<android::renderscript::Element>>(rs); }
	static jni::ref<android::renderscript::Element> I64_2(jni::ref<android::renderscript::RenderScript> rs) { return call_static_method<"I64_2", jni::ref<android::renderscript::Element>>(rs); }
	static jni::ref<android::renderscript::Element> I64_3(jni::ref<android::renderscript::RenderScript> rs) { return call_static_method<"I64_3", jni::ref<android::renderscript::Element>>(rs); }
	static jni::ref<android::renderscript::Element> I64_4(jni::ref<android::renderscript::RenderScript> rs) { return call_static_method<"I64_4", jni::ref<android::renderscript::Element>>(rs); }
	static jni::ref<android::renderscript::Element> YUV(jni::ref<android::renderscript::RenderScript> rs) { return call_static_method<"YUV", jni::ref<android::renderscript::Element>>(rs); }
	static jni::ref<android::renderscript::Element> MATRIX_4X4(jni::ref<android::renderscript::RenderScript> rs) { return call_static_method<"MATRIX_4X4", jni::ref<android::renderscript::Element>>(rs); }
	static jni::ref<android::renderscript::Element> MATRIX4X4(jni::ref<android::renderscript::RenderScript> rs) { return call_static_method<"MATRIX4X4", jni::ref<android::renderscript::Element>>(rs); }
	static jni::ref<android::renderscript::Element> MATRIX_3X3(jni::ref<android::renderscript::RenderScript> rs) { return call_static_method<"MATRIX_3X3", jni::ref<android::renderscript::Element>>(rs); }
	static jni::ref<android::renderscript::Element> MATRIX_2X2(jni::ref<android::renderscript::RenderScript> rs) { return call_static_method<"MATRIX_2X2", jni::ref<android::renderscript::Element>>(rs); }
	static jni::ref<android::renderscript::Element> createVector(jni::ref<android::renderscript::RenderScript> rs, jni::ref<android::renderscript::Element_DataType> dt, jint size) { return call_static_method<"createVector", jni::ref<android::renderscript::Element>>(rs, dt, size); }
	static jni::ref<android::renderscript::Element> createPixel(jni::ref<android::renderscript::RenderScript> rs, jni::ref<android::renderscript::Element_DataType> dt, jni::ref<android::renderscript::Element_DataKind> dk) { return call_static_method<"createPixel", jni::ref<android::renderscript::Element>>(rs, dt, dk); }
	jboolean isCompatible(jni::ref<android::renderscript::Element> e) { return call_method<"isCompatible", jboolean>(e); }

protected:

	Element(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_RENDERSCRIPT_ELEMENT