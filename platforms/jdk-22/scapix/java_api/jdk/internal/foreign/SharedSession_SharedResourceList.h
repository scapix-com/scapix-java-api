// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/jdk/internal/foreign/MemorySessionImpl_ResourceList.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_SHAREDSESSION_SHAREDRESOURCELIST_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_SHAREDSESSION_SHAREDRESOURCELIST_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::foreign { class SharedSession_SharedResourceList; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::foreign::SharedSession_SharedResourceList>
{
	static constexpr fixed_string class_name = "jdk/internal/foreign/SharedSession$SharedResourceList";
	using base_classes = std::tuple<scapix::java_api::jdk::internal::foreign::MemorySessionImpl_ResourceList>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_SHAREDSESSION_SHAREDRESOURCELIST_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_SHAREDSESSION_SHAREDRESOURCELIST)
#define SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_SHAREDSESSION_SHAREDRESOURCELIST

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class jdk::internal::foreign::SharedSession_SharedResourceList : public jni::object_base<"jdk/internal/foreign/SharedSession$SharedResourceList",
	jdk::internal::foreign::MemorySessionImpl_ResourceList>
{
public:


protected:

	SharedSession_SharedResourceList(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_SHAREDSESSION_SHAREDRESOURCELIST
