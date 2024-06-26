// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/jdk/internal/ref/PhantomCleanable.h>

#ifndef SCAPIX_JAVA_API_JAVA_IO_FILECLEANABLE_FWD
#define SCAPIX_JAVA_API_JAVA_IO_FILECLEANABLE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::io { class FileCleanable; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::io::FileCleanable>
{
	static constexpr fixed_string class_name = "java/io/FileCleanable";
	using base_classes = std::tuple<scapix::java_api::jdk::internal::ref::PhantomCleanable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_IO_FILECLEANABLE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_IO_FILECLEANABLE)
#define SCAPIX_JAVA_API_JAVA_IO_FILECLEANABLE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::io::FileCleanable : public jni::object_base<"java/io/FileCleanable",
	jdk::internal::ref::PhantomCleanable>
{
public:


protected:

	FileCleanable(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_IO_FILECLEANABLE
