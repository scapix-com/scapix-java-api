// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_CHARACTER_CHARACTERCACHE_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_CHARACTER_CHARACTERCACHE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang { class Character_CharacterCache; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::Character_CharacterCache>
{
	static constexpr fixed_string class_name = "java/lang/Character$CharacterCache";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_CHARACTER_CHARACTERCACHE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_CHARACTER_CHARACTERCACHE)
#define SCAPIX_JAVA_API_JAVA_LANG_CHARACTER_CHARACTERCACHE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::lang::Character_CharacterCache : public jni::object_base<"java/lang/Character$CharacterCache",
	java::lang::Object>
{
public:


protected:

	Character_CharacterCache(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_CHARACTER_CHARACTERCACHE
