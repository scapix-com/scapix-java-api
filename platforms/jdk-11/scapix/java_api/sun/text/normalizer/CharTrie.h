// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/text/normalizer/Trie.h>

#ifndef SCAPIX_JAVA_API_SUN_TEXT_NORMALIZER_CHARTRIE_FWD
#define SCAPIX_JAVA_API_SUN_TEXT_NORMALIZER_CHARTRIE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::text::normalizer { class CharTrie; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::text::normalizer::CharTrie>
{
	static constexpr fixed_string class_name = "sun/text/normalizer/CharTrie";
	using base_classes = std::tuple<scapix::java_api::sun::text::normalizer::Trie>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_TEXT_NORMALIZER_CHARTRIE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_TEXT_NORMALIZER_CHARTRIE)
#define SCAPIX_JAVA_API_SUN_TEXT_NORMALIZER_CHARTRIE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/InputStream.h>
#include <scapix/java_api/sun/text/normalizer/Trie_DataManipulate.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::text::normalizer::CharTrie : public jni::object_base<"sun/text/normalizer/CharTrie",
	sun::text::normalizer::Trie>
{
public:

	static jni::ref<sun::text::normalizer::CharTrie> new_object(jni::ref<java::io::InputStream> inputStream, jni::ref<sun::text::normalizer::Trie_DataManipulate> dataManipulate) { return base_::new_object(inputStream, dataManipulate); }
	jchar getCodePointValue(jint ch) { return call_method<"getCodePointValue", jchar>(ch); }
	jchar getLeadValue(jchar ch) { return call_method<"getLeadValue", jchar>(ch); }

protected:

	CharTrie(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_TEXT_NORMALIZER_CHARTRIE