// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/jdk/internal/foreign/MemorySessionImpl_ResourceList.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_CONFINEDSESSION_CONFINEDRESOURCELIST_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_CONFINEDSESSION_CONFINEDRESOURCELIST_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::foreign { class ConfinedSession_ConfinedResourceList; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::foreign::ConfinedSession_ConfinedResourceList>
{
	static constexpr fixed_string class_name = "jdk/internal/foreign/ConfinedSession$ConfinedResourceList";
	using base_classes = std::tuple<scapix::java_api::jdk::internal::foreign::MemorySessionImpl_ResourceList>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_CONFINEDSESSION_CONFINEDRESOURCELIST_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_CONFINEDSESSION_CONFINEDRESOURCELIST)
#define SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_CONFINEDSESSION_CONFINEDRESOURCELIST

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class jdk::internal::foreign::ConfinedSession_ConfinedResourceList : public jni::object_base<"jdk/internal/foreign/ConfinedSession$ConfinedResourceList",
	jdk::internal::foreign::MemorySessionImpl_ResourceList>
{
public:


protected:

	ConfinedSession_ConfinedResourceList(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_CONFINEDSESSION_CONFINEDRESOURCELIST
