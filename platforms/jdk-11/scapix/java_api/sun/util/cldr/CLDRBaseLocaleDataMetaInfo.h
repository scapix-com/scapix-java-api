// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/sun/util/locale/provider/LocaleDataMetaInfo.h>

#ifndef SCAPIX_JAVA_API_SUN_UTIL_CLDR_CLDRBASELOCALEDATAMETAINFO_FWD
#define SCAPIX_JAVA_API_SUN_UTIL_CLDR_CLDRBASELOCALEDATAMETAINFO_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::util::cldr { class CLDRBaseLocaleDataMetaInfo; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::util::cldr::CLDRBaseLocaleDataMetaInfo>
{
	static constexpr fixed_string class_name = "sun/util/cldr/CLDRBaseLocaleDataMetaInfo";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::sun::util::locale::provider::LocaleDataMetaInfo>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_UTIL_CLDR_CLDRBASELOCALEDATAMETAINFO_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_UTIL_CLDR_CLDRBASELOCALEDATAMETAINFO)
#define SCAPIX_JAVA_API_SUN_UTIL_CLDR_CLDRBASELOCALEDATAMETAINFO

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Map.h>
#include <scapix/java_api/sun/util/locale/provider/LocaleProviderAdapter_Type.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::util::cldr::CLDRBaseLocaleDataMetaInfo : public jni::object_base<"sun/util/cldr/CLDRBaseLocaleDataMetaInfo",
	java::lang::Object,
	sun::util::locale::provider::LocaleDataMetaInfo>
{
public:

	static jni::ref<sun::util::cldr::CLDRBaseLocaleDataMetaInfo> new_object() { return base_::new_object(); }
	jni::ref<sun::util::locale::provider::LocaleProviderAdapter_Type> getType() { return call_method<"getType", jni::ref<sun::util::locale::provider::LocaleProviderAdapter_Type>>(); }
	jni::ref<java::lang::String> availableLanguageTags(jni::ref<java::lang::String> category) { return call_method<"availableLanguageTags", jni::ref<java::lang::String>>(category); }
	jni::ref<java::util::Map> getLanguageAliasMap() { return call_method<"getLanguageAliasMap", jni::ref<java::util::Map>>(); }
	jni::ref<java::util::Map> tzCanonicalIDs() { return call_method<"tzCanonicalIDs", jni::ref<java::util::Map>>(); }
	jni::ref<java::util::Map> parentLocales() { return call_method<"parentLocales", jni::ref<java::util::Map>>(); }

protected:

	CLDRBaseLocaleDataMetaInfo(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_UTIL_CLDR_CLDRBASELOCALEDATAMETAINFO
