// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/nio/file/DirectoryStream.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_JRTFS_JRTDIRECTORYSTREAM_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_JRTFS_JRTDIRECTORYSTREAM_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::jrtfs { class JrtDirectoryStream; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::jrtfs::JrtDirectoryStream>
{
	static constexpr fixed_string class_name = "jdk/internal/jrtfs/JrtDirectoryStream";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::nio::file::DirectoryStream>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_JRTFS_JRTDIRECTORYSTREAM_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_JRTFS_JRTDIRECTORYSTREAM)
#define SCAPIX_JAVA_API_JDK_INTERNAL_JRTFS_JRTDIRECTORYSTREAM

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/Iterator.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class jdk::internal::jrtfs::JrtDirectoryStream : public jni::object_base<"jdk/internal/jrtfs/JrtDirectoryStream",
	java::lang::Object,
	java::nio::file::DirectoryStream>
{
public:

	jni::ref<java::util::Iterator> iterator() { return call_method<"iterator", jni::ref<java::util::Iterator>>(); }
	void close() { return call_method<"close", void>(); }

protected:

	JrtDirectoryStream(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_JRTFS_JRTDIRECTORYSTREAM
