// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/nio/file/FileSystem.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_JRTFS_JRTFILESYSTEM_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_JRTFS_JRTFILESYSTEM_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::jrtfs { class JrtFileSystem; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::jrtfs::JrtFileSystem>
{
	static constexpr fixed_string class_name = "jdk/internal/jrtfs/JrtFileSystem";
	using base_classes = std::tuple<scapix::java_api::java::nio::file::FileSystem>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_JRTFS_JRTFILESYSTEM_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_JRTFS_JRTFILESYSTEM)
#define SCAPIX_JAVA_API_JDK_INTERNAL_JRTFS_JRTFILESYSTEM

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Iterable.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/nio/file/PathMatcher.h>
#include <scapix/java_api/java/nio/file/WatchService.h>
#include <scapix/java_api/java/nio/file/attribute/UserPrincipalLookupService.h>
#include <scapix/java_api/java/nio/file/spi/FileSystemProvider.h>
#include <scapix/java_api/java/util/Set.h>
#include <scapix/java_api/jdk/internal/jrtfs/JrtPath.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class jdk::internal::jrtfs::JrtFileSystem : public jni::object_base<"jdk/internal/jrtfs/JrtFileSystem",
	java::nio::file::FileSystem>
{
public:

	jboolean isOpen() { return call_method<"isOpen", jboolean>(); }
	void close() { return call_method<"close", void>(); }
	jni::ref<java::nio::file::spi::FileSystemProvider> provider() { return call_method<"provider", jni::ref<java::nio::file::spi::FileSystemProvider>>(); }
	jni::ref<java::lang::Iterable> getRootDirectories() { return call_method<"getRootDirectories", jni::ref<java::lang::Iterable>>(); }
	jni::ref<jdk::internal::jrtfs::JrtPath> getPath(jni::ref<java::lang::String> first, jni::ref<jni::array<java::lang::String>> more) { return call_method<"getPath", jni::ref<jdk::internal::jrtfs::JrtPath>>(first, more); }
	jboolean isReadOnly() { return call_method<"isReadOnly", jboolean>(); }
	jni::ref<java::nio::file::attribute::UserPrincipalLookupService> getUserPrincipalLookupService() { return call_method<"getUserPrincipalLookupService", jni::ref<java::nio::file::attribute::UserPrincipalLookupService>>(); }
	jni::ref<java::nio::file::WatchService> newWatchService() { return call_method<"newWatchService", jni::ref<java::nio::file::WatchService>>(); }
	jni::ref<java::lang::Iterable> getFileStores() { return call_method<"getFileStores", jni::ref<java::lang::Iterable>>(); }
	jni::ref<java::util::Set> supportedFileAttributeViews() { return call_method<"supportedFileAttributeViews", jni::ref<java::util::Set>>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getSeparator() { return call_method<"getSeparator", jni::ref<java::lang::String>>(); }
	jni::ref<java::nio::file::PathMatcher> getPathMatcher(jni::ref<java::lang::String> syntaxAndInput) { return call_method<"getPathMatcher", jni::ref<java::nio::file::PathMatcher>>(syntaxAndInput); }

protected:

	JrtFileSystem(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_JRTFS_JRTFILESYSTEM
