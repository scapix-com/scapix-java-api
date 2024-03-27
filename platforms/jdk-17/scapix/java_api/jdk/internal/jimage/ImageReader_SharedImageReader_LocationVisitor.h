// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_JIMAGE_IMAGEREADER_SHAREDIMAGEREADER_LOCATIONVISITOR_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_JIMAGE_IMAGEREADER_SHAREDIMAGEREADER_LOCATIONVISITOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::jimage { class ImageReader_SharedImageReader_LocationVisitor; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::jimage::ImageReader_SharedImageReader_LocationVisitor>
{
	static constexpr fixed_string class_name = "jdk/internal/jimage/ImageReader$SharedImageReader$LocationVisitor";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_JIMAGE_IMAGEREADER_SHAREDIMAGEREADER_LOCATIONVISITOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_JIMAGE_IMAGEREADER_SHAREDIMAGEREADER_LOCATIONVISITOR)
#define SCAPIX_JAVA_API_JDK_INTERNAL_JIMAGE_IMAGEREADER_SHAREDIMAGEREADER_LOCATIONVISITOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/jdk/internal/jimage/ImageLocation.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class jdk::internal::jimage::ImageReader_SharedImageReader_LocationVisitor : public jni::object_base<"jdk/internal/jimage/ImageReader$SharedImageReader$LocationVisitor",
	java::lang::Object>
{
public:

	void visit(jni::ref<jdk::internal::jimage::ImageLocation> p1) { return call_method<"visit", void>(p1); }

protected:

	ImageReader_SharedImageReader_LocationVisitor(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_JIMAGE_IMAGEREADER_SHAREDIMAGEREADER_LOCATIONVISITOR
