// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_RENDERSCRIPT_FIELDPACKER_FWD
#define SCAPIX_JAVA_API_ANDROID_RENDERSCRIPT_FIELDPACKER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::renderscript { class FieldPacker; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::renderscript::FieldPacker>
{
	static constexpr fixed_string class_name = "android/renderscript/FieldPacker";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_RENDERSCRIPT_FIELDPACKER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_RENDERSCRIPT_FIELDPACKER)
#define SCAPIX_JAVA_API_ANDROID_RENDERSCRIPT_FIELDPACKER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/renderscript/BaseObj.h>
#include <scapix/java_api/android/renderscript/Byte2.h>
#include <scapix/java_api/android/renderscript/Byte3.h>
#include <scapix/java_api/android/renderscript/Byte4.h>
#include <scapix/java_api/android/renderscript/Double2.h>
#include <scapix/java_api/android/renderscript/Double3.h>
#include <scapix/java_api/android/renderscript/Double4.h>
#include <scapix/java_api/android/renderscript/Float2.h>
#include <scapix/java_api/android/renderscript/Float3.h>
#include <scapix/java_api/android/renderscript/Float4.h>
#include <scapix/java_api/android/renderscript/Int2.h>
#include <scapix/java_api/android/renderscript/Int3.h>
#include <scapix/java_api/android/renderscript/Int4.h>
#include <scapix/java_api/android/renderscript/Long2.h>
#include <scapix/java_api/android/renderscript/Long3.h>
#include <scapix/java_api/android/renderscript/Long4.h>
#include <scapix/java_api/android/renderscript/Matrix2f.h>
#include <scapix/java_api/android/renderscript/Matrix3f.h>
#include <scapix/java_api/android/renderscript/Matrix4f.h>
#include <scapix/java_api/android/renderscript/Short2.h>
#include <scapix/java_api/android/renderscript/Short3.h>
#include <scapix/java_api/android/renderscript/Short4.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::renderscript::FieldPacker : public jni::object_base<"android/renderscript/FieldPacker",
	java::lang::Object>
{
public:

	static jni::ref<android::renderscript::FieldPacker> new_object(jint len) { return base_::new_object(len); }
	static jni::ref<android::renderscript::FieldPacker> new_object(jni::ref<jni::array<jbyte>> data) { return base_::new_object(data); }
	void align(jint v) { return call_method<"align", void>(v); }
	void subalign(jint v) { return call_method<"subalign", void>(v); }
	void reset() { return call_method<"reset", void>(); }
	void reset(jint i) { return call_method<"reset", void>(i); }
	void skip(jint i) { return call_method<"skip", void>(i); }
	void addI8(jbyte v) { return call_method<"addI8", void>(v); }
	jbyte subI8() { return call_method<"subI8", jbyte>(); }
	void addI16(jshort v) { return call_method<"addI16", void>(v); }
	jshort subI16() { return call_method<"subI16", jshort>(); }
	void addI32(jint v) { return call_method<"addI32", void>(v); }
	jint subI32() { return call_method<"subI32", jint>(); }
	void addI64(jlong v) { return call_method<"addI64", void>(v); }
	jlong subI64() { return call_method<"subI64", jlong>(); }
	void addU8(jshort v) { return call_method<"addU8", void>(v); }
	void addU16(jint v) { return call_method<"addU16", void>(v); }
	void addU32(jlong v) { return call_method<"addU32", void>(v); }
	void addU64(jlong v) { return call_method<"addU64", void>(v); }
	void addF32(jfloat v) { return call_method<"addF32", void>(v); }
	jfloat subF32() { return call_method<"subF32", jfloat>(); }
	void addF64(jdouble v) { return call_method<"addF64", void>(v); }
	jdouble subF64() { return call_method<"subF64", jdouble>(); }
	void addObj(jni::ref<android::renderscript::BaseObj> obj) { return call_method<"addObj", void>(obj); }
	void addF32(jni::ref<android::renderscript::Float2> v) { return call_method<"addF32", void>(v); }
	void addF32(jni::ref<android::renderscript::Float3> v) { return call_method<"addF32", void>(v); }
	void addF32(jni::ref<android::renderscript::Float4> v) { return call_method<"addF32", void>(v); }
	void addF64(jni::ref<android::renderscript::Double2> v) { return call_method<"addF64", void>(v); }
	void addF64(jni::ref<android::renderscript::Double3> v) { return call_method<"addF64", void>(v); }
	void addF64(jni::ref<android::renderscript::Double4> v) { return call_method<"addF64", void>(v); }
	void addI8(jni::ref<android::renderscript::Byte2> v) { return call_method<"addI8", void>(v); }
	void addI8(jni::ref<android::renderscript::Byte3> v) { return call_method<"addI8", void>(v); }
	void addI8(jni::ref<android::renderscript::Byte4> v) { return call_method<"addI8", void>(v); }
	void addU8(jni::ref<android::renderscript::Short2> v) { return call_method<"addU8", void>(v); }
	void addU8(jni::ref<android::renderscript::Short3> v) { return call_method<"addU8", void>(v); }
	void addU8(jni::ref<android::renderscript::Short4> v) { return call_method<"addU8", void>(v); }
	void addI16(jni::ref<android::renderscript::Short2> v) { return call_method<"addI16", void>(v); }
	void addI16(jni::ref<android::renderscript::Short3> v) { return call_method<"addI16", void>(v); }
	void addI16(jni::ref<android::renderscript::Short4> v) { return call_method<"addI16", void>(v); }
	void addU16(jni::ref<android::renderscript::Int2> v) { return call_method<"addU16", void>(v); }
	void addU16(jni::ref<android::renderscript::Int3> v) { return call_method<"addU16", void>(v); }
	void addU16(jni::ref<android::renderscript::Int4> v) { return call_method<"addU16", void>(v); }
	void addI32(jni::ref<android::renderscript::Int2> v) { return call_method<"addI32", void>(v); }
	void addI32(jni::ref<android::renderscript::Int3> v) { return call_method<"addI32", void>(v); }
	void addI32(jni::ref<android::renderscript::Int4> v) { return call_method<"addI32", void>(v); }
	void addU32(jni::ref<android::renderscript::Long2> v) { return call_method<"addU32", void>(v); }
	void addU32(jni::ref<android::renderscript::Long3> v) { return call_method<"addU32", void>(v); }
	void addU32(jni::ref<android::renderscript::Long4> v) { return call_method<"addU32", void>(v); }
	void addI64(jni::ref<android::renderscript::Long2> v) { return call_method<"addI64", void>(v); }
	void addI64(jni::ref<android::renderscript::Long3> v) { return call_method<"addI64", void>(v); }
	void addI64(jni::ref<android::renderscript::Long4> v) { return call_method<"addI64", void>(v); }
	void addU64(jni::ref<android::renderscript::Long2> v) { return call_method<"addU64", void>(v); }
	void addU64(jni::ref<android::renderscript::Long3> v) { return call_method<"addU64", void>(v); }
	void addU64(jni::ref<android::renderscript::Long4> v) { return call_method<"addU64", void>(v); }
	jni::ref<android::renderscript::Float2> subFloat2() { return call_method<"subFloat2", jni::ref<android::renderscript::Float2>>(); }
	jni::ref<android::renderscript::Float3> subFloat3() { return call_method<"subFloat3", jni::ref<android::renderscript::Float3>>(); }
	jni::ref<android::renderscript::Float4> subFloat4() { return call_method<"subFloat4", jni::ref<android::renderscript::Float4>>(); }
	jni::ref<android::renderscript::Double2> subDouble2() { return call_method<"subDouble2", jni::ref<android::renderscript::Double2>>(); }
	jni::ref<android::renderscript::Double3> subDouble3() { return call_method<"subDouble3", jni::ref<android::renderscript::Double3>>(); }
	jni::ref<android::renderscript::Double4> subDouble4() { return call_method<"subDouble4", jni::ref<android::renderscript::Double4>>(); }
	jni::ref<android::renderscript::Byte2> subByte2() { return call_method<"subByte2", jni::ref<android::renderscript::Byte2>>(); }
	jni::ref<android::renderscript::Byte3> subByte3() { return call_method<"subByte3", jni::ref<android::renderscript::Byte3>>(); }
	jni::ref<android::renderscript::Byte4> subByte4() { return call_method<"subByte4", jni::ref<android::renderscript::Byte4>>(); }
	jni::ref<android::renderscript::Short2> subShort2() { return call_method<"subShort2", jni::ref<android::renderscript::Short2>>(); }
	jni::ref<android::renderscript::Short3> subShort3() { return call_method<"subShort3", jni::ref<android::renderscript::Short3>>(); }
	jni::ref<android::renderscript::Short4> subShort4() { return call_method<"subShort4", jni::ref<android::renderscript::Short4>>(); }
	jni::ref<android::renderscript::Int2> subInt2() { return call_method<"subInt2", jni::ref<android::renderscript::Int2>>(); }
	jni::ref<android::renderscript::Int3> subInt3() { return call_method<"subInt3", jni::ref<android::renderscript::Int3>>(); }
	jni::ref<android::renderscript::Int4> subInt4() { return call_method<"subInt4", jni::ref<android::renderscript::Int4>>(); }
	jni::ref<android::renderscript::Long2> subLong2() { return call_method<"subLong2", jni::ref<android::renderscript::Long2>>(); }
	jni::ref<android::renderscript::Long3> subLong3() { return call_method<"subLong3", jni::ref<android::renderscript::Long3>>(); }
	jni::ref<android::renderscript::Long4> subLong4() { return call_method<"subLong4", jni::ref<android::renderscript::Long4>>(); }
	void addMatrix(jni::ref<android::renderscript::Matrix4f> v) { return call_method<"addMatrix", void>(v); }
	jni::ref<android::renderscript::Matrix4f> subMatrix4f() { return call_method<"subMatrix4f", jni::ref<android::renderscript::Matrix4f>>(); }
	void addMatrix(jni::ref<android::renderscript::Matrix3f> v) { return call_method<"addMatrix", void>(v); }
	jni::ref<android::renderscript::Matrix3f> subMatrix3f() { return call_method<"subMatrix3f", jni::ref<android::renderscript::Matrix3f>>(); }
	void addMatrix(jni::ref<android::renderscript::Matrix2f> v) { return call_method<"addMatrix", void>(v); }
	jni::ref<android::renderscript::Matrix2f> subMatrix2f() { return call_method<"subMatrix2f", jni::ref<android::renderscript::Matrix2f>>(); }
	void addBoolean(jboolean v) { return call_method<"addBoolean", void>(v); }
	jboolean subBoolean() { return call_method<"subBoolean", jboolean>(); }
	jni::ref<jni::array<jbyte>> getData() { return call_method<"getData", jni::ref<jni::array<jbyte>>>(); }

protected:

	FieldPacker(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_RENDERSCRIPT_FIELDPACKER
