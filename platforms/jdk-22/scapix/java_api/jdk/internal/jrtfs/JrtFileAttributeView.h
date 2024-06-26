// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/nio/file/attribute/BasicFileAttributeView.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_JRTFS_JRTFILEATTRIBUTEVIEW_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_JRTFS_JRTFILEATTRIBUTEVIEW_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::jrtfs { class JrtFileAttributeView; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::jrtfs::JrtFileAttributeView>
{
	static constexpr fixed_string class_name = "jdk/internal/jrtfs/JrtFileAttributeView";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::nio::file::attribute::BasicFileAttributeView>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_JRTFS_JRTFILEATTRIBUTEVIEW_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_JRTFS_JRTFILEATTRIBUTEVIEW)
#define SCAPIX_JAVA_API_JDK_INTERNAL_JRTFS_JRTFILEATTRIBUTEVIEW

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/nio/file/attribute/FileTime.h>
#include <scapix/java_api/jdk/internal/jrtfs/JrtFileAttributes.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class jdk::internal::jrtfs::JrtFileAttributeView : public jni::object_base<"jdk/internal/jrtfs/JrtFileAttributeView",
	java::lang::Object,
	java::nio::file::attribute::BasicFileAttributeView>
{
public:

	jni::ref<java::lang::String> name() { return call_method<"name", jni::ref<java::lang::String>>(); }
	jni::ref<jdk::internal::jrtfs::JrtFileAttributes> readAttributes() { return call_method<"readAttributes", jni::ref<jdk::internal::jrtfs::JrtFileAttributes>>(); }
	void setTimes(jni::ref<java::nio::file::attribute::FileTime> lastModifiedTime, jni::ref<java::nio::file::attribute::FileTime> lastAccessTime, jni::ref<java::nio::file::attribute::FileTime> createTime) { return call_method<"setTimes", void>(lastModifiedTime, lastAccessTime, createTime); }

protected:

	JrtFileAttributeView(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_JRTFS_JRTFILEATTRIBUTEVIEW
