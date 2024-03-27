// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_JIMAGE_DECOMPRESSOR_RESOURCEDECOMPRESSORFACTORY_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_JIMAGE_DECOMPRESSOR_RESOURCEDECOMPRESSORFACTORY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::jimage::decompressor { class ResourceDecompressorFactory; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::jimage::decompressor::ResourceDecompressorFactory>
{
	static constexpr fixed_string class_name = "jdk/internal/jimage/decompressor/ResourceDecompressorFactory";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_JIMAGE_DECOMPRESSOR_RESOURCEDECOMPRESSORFACTORY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_JIMAGE_DECOMPRESSOR_RESOURCEDECOMPRESSORFACTORY)
#define SCAPIX_JAVA_API_JDK_INTERNAL_JIMAGE_DECOMPRESSOR_RESOURCEDECOMPRESSORFACTORY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Properties.h>
#include <scapix/java_api/jdk/internal/jimage/decompressor/ResourceDecompressor.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::jimage::decompressor::ResourceDecompressorFactory : public jni::object_base<"jdk/internal/jimage/decompressor/ResourceDecompressorFactory",
	java::lang::Object>
{
public:

	jni::ref<java::lang::String> getName() { return call_method<"getName", jni::ref<java::lang::String>>(); }
	jni::ref<jdk::internal::jimage::decompressor::ResourceDecompressor> newDecompressor(jni::ref<java::util::Properties> p1) { return call_method<"newDecompressor", jni::ref<jdk::internal::jimage::decompressor::ResourceDecompressor>>(p1); }

protected:

	ResourceDecompressorFactory(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_JIMAGE_DECOMPRESSOR_RESOURCEDECOMPRESSORFACTORY