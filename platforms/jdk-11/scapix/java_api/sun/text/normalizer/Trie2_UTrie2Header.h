// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_TEXT_NORMALIZER_TRIE2_UTRIE2HEADER_FWD
#define SCAPIX_JAVA_API_SUN_TEXT_NORMALIZER_TRIE2_UTRIE2HEADER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::text::normalizer { class Trie2_UTrie2Header; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::text::normalizer::Trie2_UTrie2Header>
{
	static constexpr fixed_string class_name = "sun/text/normalizer/Trie2$UTrie2Header";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_TEXT_NORMALIZER_TRIE2_UTRIE2HEADER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_TEXT_NORMALIZER_TRIE2_UTRIE2HEADER)
#define SCAPIX_JAVA_API_SUN_TEXT_NORMALIZER_TRIE2_UTRIE2HEADER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::text::normalizer::Trie2_UTrie2Header : public jni::object_base<"sun/text/normalizer/Trie2$UTrie2Header",
	java::lang::Object>
{
public:


protected:

	Trie2_UTrie2Header(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_TEXT_NORMALIZER_TRIE2_UTRIE2HEADER
