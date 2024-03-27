// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/awt/image/SampleModel.h>

#ifndef SCAPIX_JAVA_API_JAVA_AWT_IMAGE_COMPONENTSAMPLEMODEL_FWD
#define SCAPIX_JAVA_API_JAVA_AWT_IMAGE_COMPONENTSAMPLEMODEL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::awt::image { class ComponentSampleModel; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::awt::image::ComponentSampleModel>
{
	static constexpr fixed_string class_name = "java/awt/image/ComponentSampleModel";
	using base_classes = std::tuple<scapix::java_api::java::awt::image::SampleModel>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_IMAGE_COMPONENTSAMPLEMODEL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_AWT_IMAGE_COMPONENTSAMPLEMODEL)
#define SCAPIX_JAVA_API_JAVA_AWT_IMAGE_COMPONENTSAMPLEMODEL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/image/DataBuffer.h>
#include <scapix/java_api/java/lang/Object.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::awt::image::ComponentSampleModel : public jni::object_base<"java/awt/image/ComponentSampleModel",
	java::awt::image::SampleModel>
{
public:

	static jni::ref<java::awt::image::ComponentSampleModel> new_object(jint p1, jint p2, jint p3, jint p4, jint p5, jni::ref<jni::array<jint>> p6) { return base_::new_object(p1, p2, p3, p4, p5, p6); }
	static jni::ref<java::awt::image::ComponentSampleModel> new_object(jint p1, jint p2, jint p3, jint p4, jint p5, jni::ref<jni::array<jint>> p6, jni::ref<jni::array<jint>> p7) { return base_::new_object(p1, p2, p3, p4, p5, p6, p7); }
	jni::ref<java::awt::image::SampleModel> createCompatibleSampleModel(jint p1, jint p2) { return call_method<"createCompatibleSampleModel", jni::ref<java::awt::image::SampleModel>>(p1, p2); }
	jni::ref<java::awt::image::SampleModel> createSubsetSampleModel(jni::ref<jni::array<jint>> p1) { return call_method<"createSubsetSampleModel", jni::ref<java::awt::image::SampleModel>>(p1); }
	jni::ref<java::awt::image::DataBuffer> createDataBuffer() { return call_method<"createDataBuffer", jni::ref<java::awt::image::DataBuffer>>(); }
	jint getOffset(jint p1, jint p2) { return call_method<"getOffset", jint>(p1, p2); }
	jint getOffset(jint p1, jint p2, jint p3) { return call_method<"getOffset", jint>(p1, p2, p3); }
	jni::ref<jni::array<jint>> getSampleSize() { return call_method<"getSampleSize", jni::ref<jni::array<jint>>>(); }
	jint getSampleSize(jint p1) { return call_method<"getSampleSize", jint>(p1); }
	jni::ref<jni::array<jint>> getBankIndices() { return call_method<"getBankIndices", jni::ref<jni::array<jint>>>(); }
	jni::ref<jni::array<jint>> getBandOffsets() { return call_method<"getBandOffsets", jni::ref<jni::array<jint>>>(); }
	jint getScanlineStride() { return call_method<"getScanlineStride", jint>(); }
	jint getPixelStride() { return call_method<"getPixelStride", jint>(); }
	jint getNumDataElements() { return call_method<"getNumDataElements", jint>(); }
	jni::ref<java::lang::Object> getDataElements(jint p1, jint p2, jni::ref<java::lang::Object> p3, jni::ref<java::awt::image::DataBuffer> p4) { return call_method<"getDataElements", jni::ref<java::lang::Object>>(p1, p2, p3, p4); }
	jni::ref<jni::array<jint>> getPixel(jint p1, jint p2, jni::ref<jni::array<jint>> p3, jni::ref<java::awt::image::DataBuffer> p4) { return call_method<"getPixel", jni::ref<jni::array<jint>>>(p1, p2, p3, p4); }
	jni::ref<jni::array<jint>> getPixels(jint p1, jint p2, jint p3, jint p4, jni::ref<jni::array<jint>> p5, jni::ref<java::awt::image::DataBuffer> p6) { return call_method<"getPixels", jni::ref<jni::array<jint>>>(p1, p2, p3, p4, p5, p6); }
	jint getSample(jint p1, jint p2, jint p3, jni::ref<java::awt::image::DataBuffer> p4) { return call_method<"getSample", jint>(p1, p2, p3, p4); }
	jfloat getSampleFloat(jint p1, jint p2, jint p3, jni::ref<java::awt::image::DataBuffer> p4) { return call_method<"getSampleFloat", jfloat>(p1, p2, p3, p4); }
	jdouble getSampleDouble(jint p1, jint p2, jint p3, jni::ref<java::awt::image::DataBuffer> p4) { return call_method<"getSampleDouble", jdouble>(p1, p2, p3, p4); }
	jni::ref<jni::array<jint>> getSamples(jint p1, jint p2, jint p3, jint p4, jint p5, jni::ref<jni::array<jint>> p6, jni::ref<java::awt::image::DataBuffer> p7) { return call_method<"getSamples", jni::ref<jni::array<jint>>>(p1, p2, p3, p4, p5, p6, p7); }
	void setDataElements(jint p1, jint p2, jni::ref<java::lang::Object> p3, jni::ref<java::awt::image::DataBuffer> p4) { return call_method<"setDataElements", void>(p1, p2, p3, p4); }
	void setPixel(jint p1, jint p2, jni::ref<jni::array<jint>> p3, jni::ref<java::awt::image::DataBuffer> p4) { return call_method<"setPixel", void>(p1, p2, p3, p4); }
	void setPixels(jint p1, jint p2, jint p3, jint p4, jni::ref<jni::array<jint>> p5, jni::ref<java::awt::image::DataBuffer> p6) { return call_method<"setPixels", void>(p1, p2, p3, p4, p5, p6); }
	void setSample(jint p1, jint p2, jint p3, jint p4, jni::ref<java::awt::image::DataBuffer> p5) { return call_method<"setSample", void>(p1, p2, p3, p4, p5); }
	void setSample(jint p1, jint p2, jint p3, jfloat p4, jni::ref<java::awt::image::DataBuffer> p5) { return call_method<"setSample", void>(p1, p2, p3, p4, p5); }
	void setSample(jint p1, jint p2, jint p3, jdouble p4, jni::ref<java::awt::image::DataBuffer> p5) { return call_method<"setSample", void>(p1, p2, p3, p4, p5); }
	void setSamples(jint p1, jint p2, jint p3, jint p4, jint p5, jni::ref<jni::array<jint>> p6, jni::ref<java::awt::image::DataBuffer> p7) { return call_method<"setSamples", void>(p1, p2, p3, p4, p5, p6, p7); }
	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }
	jint hashCode() { return call_method<"hashCode", jint>(); }

protected:

	ComponentSampleModel(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_IMAGE_COMPONENTSAMPLEMODEL
