// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/util/locale/LocaleObjectCache.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_RESOURCEBUNDLE_CONTROL_CANDIDATELISTCACHE_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_RESOURCEBUNDLE_CONTROL_CANDIDATELISTCACHE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class ResourceBundle_Control_CandidateListCache; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::ResourceBundle_Control_CandidateListCache>
{
	static constexpr fixed_string class_name = "java/util/ResourceBundle$Control$CandidateListCache";
	using base_classes = std::tuple<scapix::java_api::sun::util::locale::LocaleObjectCache>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_RESOURCEBUNDLE_CONTROL_CANDIDATELISTCACHE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_RESOURCEBUNDLE_CONTROL_CANDIDATELISTCACHE)
#define SCAPIX_JAVA_API_JAVA_UTIL_RESOURCEBUNDLE_CONTROL_CANDIDATELISTCACHE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::ResourceBundle_Control_CandidateListCache : public jni::object_base<"java/util/ResourceBundle$Control$CandidateListCache",
	sun::util::locale::LocaleObjectCache>
{
public:


protected:

	ResourceBundle_Control_CandidateListCache(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_RESOURCEBUNDLE_CONTROL_CANDIDATELISTCACHE
