// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_SHORT_SHORTCACHE_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_SHORT_SHORTCACHE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang { class Short_ShortCache; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::Short_ShortCache>
{
	static constexpr fixed_string class_name = "java/lang/Short$ShortCache";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_SHORT_SHORTCACHE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_SHORT_SHORTCACHE)
#define SCAPIX_JAVA_API_JAVA_LANG_SHORT_SHORTCACHE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::lang::Short_ShortCache : public jni::object_base<"java/lang/Short$ShortCache",
	java::lang::Object>
{
public:


protected:

	Short_ShortCache(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_SHORT_SHORTCACHE