// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/Stack.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_UTIL_REPOSITORYIDPOOL_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_UTIL_REPOSITORYIDPOOL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::impl::util { class RepositoryIdPool; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::impl::util::RepositoryIdPool>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/impl/util/RepositoryIdPool";
	using base_classes = std::tuple<scapix::java_api::java::util::Stack>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_UTIL_REPOSITORYIDPOOL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_UTIL_REPOSITORYIDPOOL)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_UTIL_REPOSITORYIDPOOL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/corba/se/impl/util/RepositoryId.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::corba::se::impl::util::RepositoryIdPool : public jni::object_base<"com/sun/corba/se/impl/util/RepositoryIdPool",
	java::util::Stack>
{
public:

	jni::ref<com::sun::corba::se::impl::util::RepositoryId> popId() { return call_method<"popId", jni::ref<com::sun::corba::se::impl::util::RepositoryId>>(); }

protected:

	RepositoryIdPool(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_UTIL_REPOSITORYIDPOOL
