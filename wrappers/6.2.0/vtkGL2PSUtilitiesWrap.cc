/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkObjectWrap.h"
#include "vtkGL2PSUtilitiesWrap.h"
#include "vtkTextPropertyWrap.h"
#include "vtkRenderWindowWrap.h"
#include "vtkPathWrap.h"
#include "vtkMatrix4x4Wrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkGL2PSUtilitiesWrap::ptpl;

VtkGL2PSUtilitiesWrap::VtkGL2PSUtilitiesWrap()
{ }

VtkGL2PSUtilitiesWrap::VtkGL2PSUtilitiesWrap(vtkSmartPointer<vtkGL2PSUtilities> _native)
{ native = _native; }

VtkGL2PSUtilitiesWrap::~VtkGL2PSUtilitiesWrap()
{ }

void VtkGL2PSUtilitiesWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkGL2PSUtilities").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("GL2PSUtilities").ToLocalChecked(), ConstructorGetter);
}

void VtkGL2PSUtilitiesWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkGL2PSUtilitiesWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkGL2PSUtilitiesWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "Draw3DPath", Draw3DPath);
	Nan::SetPrototypeMethod(tpl, "draw3DPath", Draw3DPath);

	Nan::SetPrototypeMethod(tpl, "DrawString", DrawString);
	Nan::SetPrototypeMethod(tpl, "drawString", DrawString);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetRenderWindow", GetRenderWindow);
	Nan::SetPrototypeMethod(tpl, "getRenderWindow", GetRenderWindow);

	Nan::SetPrototypeMethod(tpl, "GetTextAsPath", GetTextAsPath);
	Nan::SetPrototypeMethod(tpl, "getTextAsPath", GetTextAsPath);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "TextPropertyToGL2PSAlignment", TextPropertyToGL2PSAlignment);
	Nan::SetPrototypeMethod(tpl, "textPropertyToGL2PSAlignment", TextPropertyToGL2PSAlignment);

	Nan::SetPrototypeMethod(tpl, "TextPropertyToPSFontName", TextPropertyToPSFontName);
	Nan::SetPrototypeMethod(tpl, "textPropertyToPSFontName", TextPropertyToPSFontName);

#ifdef VTK_NODE_PLUS_VTKGL2PSUTILITIESWRAP_INITPTPL
	VTK_NODE_PLUS_VTKGL2PSUTILITIESWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkGL2PSUtilitiesWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkGL2PSUtilities> native = vtkSmartPointer<vtkGL2PSUtilities>::New();
		VtkGL2PSUtilitiesWrap* obj = new VtkGL2PSUtilitiesWrap(native);
		obj->Wrap(info.This());
	}
	else
	{
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
		{
			Nan::ThrowError("Parameter Error");
			return;
		}
	}

	info.GetReturnValue().Set(info.This());
}

void VtkGL2PSUtilitiesWrap::Draw3DPath(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGL2PSUtilitiesWrap *wrapper = ObjectWrap::Unwrap<VtkGL2PSUtilitiesWrap>(info.Holder());
	vtkGL2PSUtilities *native = (vtkGL2PSUtilities *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPathWrap::ptpl))->HasInstance(info[0]))
	{
		VtkPathWrap *a0 = ObjectWrap::Unwrap<VtkPathWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkMatrix4x4Wrap::ptpl))->HasInstance(info[1]))
		{
			VtkMatrix4x4Wrap *a1 = ObjectWrap::Unwrap<VtkMatrix4x4Wrap>(info[1]->ToObject());
			if(info.Length() > 2 && info[2]->IsFloat64Array())
			{
				v8::Local<v8::Float64Array>a2(v8::Local<v8::Float64Array>::Cast(info[2]->ToObject()));
				if( a2->Length() < 3 )
				{
					Nan::ThrowError("Array too short.");
					return;
				}

				if(info.Length() > 3 && info[3]->IsUint8Array())
				{
					v8::Local<v8::Uint8Array>a3(v8::Local<v8::Uint8Array>::Cast(info[3]->ToObject()));
					if( a3->Length() < 4 )
					{
						Nan::ThrowError("Array too short.");
						return;
					}

					if(info.Length() > 4 && info[4]->IsString())
					{
						Nan::Utf8String a4(info[4]);
												if(info.Length() != 5)
						{
							Nan::ThrowError("Too many parameters.");
							return;
						}
						native->Draw3DPath(
							(vtkPath *) a0->native.GetPointer(),
							(vtkMatrix4x4 *) a1->native.GetPointer(),
							(double *)(a2->Buffer()->GetContents().Data()),
							(unsigned char *)(a3->Buffer()->GetContents().Data()),
							*a4
						);
						return;
					}
				}
				else if(info.Length() > 3 && info[3]->IsArray())
				{
					v8::Local<v8::Array>a3(v8::Local<v8::Array>::Cast(info[3]->ToObject()));
					unsigned char b3[4];
					if( a3->Length() < 4 )
					{
						Nan::ThrowError("Array too short.");
						return;
					}

					for( i = 0; i < 4; i++ )
					{
						if( !a3->Get(i)->IsUint32() )
						{
							Nan::ThrowError("Array contents invalid.");
							return;
						}
						b3[i] = a3->Get(i)->Uint32Value();
					}
					if(info.Length() > 4 && info[4]->IsString())
					{
						Nan::Utf8String a4(info[4]);
												if(info.Length() != 5)
						{
							Nan::ThrowError("Too many parameters.");
							return;
						}
						native->Draw3DPath(
							(vtkPath *) a0->native.GetPointer(),
							(vtkMatrix4x4 *) a1->native.GetPointer(),
							(double *)(a2->Buffer()->GetContents().Data()),
							b3,
							*a4
						);
						return;
					}
				}
			}
			else if(info.Length() > 2 && info[2]->IsArray())
			{
				v8::Local<v8::Array>a2(v8::Local<v8::Array>::Cast(info[2]->ToObject()));
				double b2[3];
				if( a2->Length() < 3 )
				{
					Nan::ThrowError("Array too short.");
					return;
				}

				for( i = 0; i < 3; i++ )
				{
					if( !a2->Get(i)->IsNumber() )
					{
						Nan::ThrowError("Array contents invalid.");
						return;
					}
					b2[i] = a2->Get(i)->NumberValue();
				}
				if(info.Length() > 3 && info[3]->IsArray())
				{
					v8::Local<v8::Array>a3(v8::Local<v8::Array>::Cast(info[3]->ToObject()));
					unsigned char b3[4];
					if( a3->Length() < 4 )
					{
						Nan::ThrowError("Array too short.");
						return;
					}

					for( i = 0; i < 4; i++ )
					{
						if( !a3->Get(i)->IsUint32() )
						{
							Nan::ThrowError("Array contents invalid.");
							return;
						}
						b3[i] = a3->Get(i)->Uint32Value();
					}
					if(info.Length() > 4 && info[4]->IsString())
					{
						Nan::Utf8String a4(info[4]);
												if(info.Length() != 5)
						{
							Nan::ThrowError("Too many parameters.");
							return;
						}
						native->Draw3DPath(
							(vtkPath *) a0->native.GetPointer(),
							(vtkMatrix4x4 *) a1->native.GetPointer(),
							b2,
							b3,
							*a4
						);
						return;
					}
				}
				else if(info.Length() > 3 && info[3]->IsUint8Array())
				{
					v8::Local<v8::Uint8Array>a3(v8::Local<v8::Uint8Array>::Cast(info[3]->ToObject()));
					if( a3->Length() < 4 )
					{
						Nan::ThrowError("Array too short.");
						return;
					}

					if(info.Length() > 4 && info[4]->IsString())
					{
						Nan::Utf8String a4(info[4]);
												if(info.Length() != 5)
						{
							Nan::ThrowError("Too many parameters.");
							return;
						}
						native->Draw3DPath(
							(vtkPath *) a0->native.GetPointer(),
							(vtkMatrix4x4 *) a1->native.GetPointer(),
							b2,
							(unsigned char *)(a3->Buffer()->GetContents().Data()),
							*a4
						);
						return;
					}
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGL2PSUtilitiesWrap::DrawString(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGL2PSUtilitiesWrap *wrapper = ObjectWrap::Unwrap<VtkGL2PSUtilitiesWrap>(info.Holder());
	vtkGL2PSUtilities *native = (vtkGL2PSUtilities *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkTextPropertyWrap::ptpl))->HasInstance(info[1]))
		{
			VtkTextPropertyWrap *a1 = ObjectWrap::Unwrap<VtkTextPropertyWrap>(info[1]->ToObject());
			if(info.Length() > 2 && info[2]->IsFloat64Array())
			{
				v8::Local<v8::Float64Array>a2(v8::Local<v8::Float64Array>::Cast(info[2]->ToObject()));
				if( a2->Length() < 3 )
				{
					Nan::ThrowError("Array too short.");
					return;
				}

				if(info.Length() > 3 && info[3]->IsNumber())
				{
										if(info.Length() != 4)
					{
						Nan::ThrowError("Too many parameters.");
						return;
					}
					native->DrawString(
						*a0,
						(vtkTextProperty *) a1->native.GetPointer(),
						(double *)(a2->Buffer()->GetContents().Data()),
						info[3]->NumberValue()
					);
					return;
				}
			}
			else if(info.Length() > 2 && info[2]->IsArray())
			{
				v8::Local<v8::Array>a2(v8::Local<v8::Array>::Cast(info[2]->ToObject()));
				double b2[3];
				if( a2->Length() < 3 )
				{
					Nan::ThrowError("Array too short.");
					return;
				}

				for( i = 0; i < 3; i++ )
				{
					if( !a2->Get(i)->IsNumber() )
					{
						Nan::ThrowError("Array contents invalid.");
						return;
					}
					b2[i] = a2->Get(i)->NumberValue();
				}
				if(info.Length() > 3 && info[3]->IsNumber())
				{
										if(info.Length() != 4)
					{
						Nan::ThrowError("Too many parameters.");
						return;
					}
					native->DrawString(
						*a0,
						(vtkTextProperty *) a1->native.GetPointer(),
						b2,
						info[3]->NumberValue()
					);
					return;
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGL2PSUtilitiesWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGL2PSUtilitiesWrap *wrapper = ObjectWrap::Unwrap<VtkGL2PSUtilitiesWrap>(info.Holder());
	vtkGL2PSUtilities *native = (vtkGL2PSUtilities *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkGL2PSUtilitiesWrap::GetRenderWindow(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGL2PSUtilitiesWrap *wrapper = ObjectWrap::Unwrap<VtkGL2PSUtilitiesWrap>(info.Holder());
	vtkGL2PSUtilities *native = (vtkGL2PSUtilities *)wrapper->native.GetPointer();
	vtkRenderWindow * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRenderWindow();
	VtkRenderWindowWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkRenderWindowWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkRenderWindowWrap *w = new VtkRenderWindowWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkGL2PSUtilitiesWrap::GetTextAsPath(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGL2PSUtilitiesWrap *wrapper = ObjectWrap::Unwrap<VtkGL2PSUtilitiesWrap>(info.Holder());
	vtkGL2PSUtilities *native = (vtkGL2PSUtilities *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTextAsPath();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGL2PSUtilitiesWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGL2PSUtilitiesWrap *wrapper = ObjectWrap::Unwrap<VtkGL2PSUtilitiesWrap>(info.Holder());
	vtkGL2PSUtilities *native = (vtkGL2PSUtilities *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->IsA(
			*a0
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGL2PSUtilitiesWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGL2PSUtilitiesWrap *wrapper = ObjectWrap::Unwrap<VtkGL2PSUtilitiesWrap>(info.Holder());
	vtkGL2PSUtilities *native = (vtkGL2PSUtilities *)wrapper->native.GetPointer();
	vtkGL2PSUtilities * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkGL2PSUtilitiesWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkGL2PSUtilitiesWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkGL2PSUtilitiesWrap *w = new VtkGL2PSUtilitiesWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkGL2PSUtilitiesWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGL2PSUtilitiesWrap *wrapper = ObjectWrap::Unwrap<VtkGL2PSUtilitiesWrap>(info.Holder());
	vtkGL2PSUtilities *native = (vtkGL2PSUtilities *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkGL2PSUtilities * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkGL2PSUtilitiesWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkGL2PSUtilitiesWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkGL2PSUtilitiesWrap *w = new VtkGL2PSUtilitiesWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGL2PSUtilitiesWrap::TextPropertyToGL2PSAlignment(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGL2PSUtilitiesWrap *wrapper = ObjectWrap::Unwrap<VtkGL2PSUtilitiesWrap>(info.Holder());
	vtkGL2PSUtilities *native = (vtkGL2PSUtilities *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkTextPropertyWrap::ptpl))->HasInstance(info[0]))
	{
		VtkTextPropertyWrap *a0 = ObjectWrap::Unwrap<VtkTextPropertyWrap>(info[0]->ToObject());
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->TextPropertyToGL2PSAlignment(
			(vtkTextProperty *) a0->native.GetPointer()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGL2PSUtilitiesWrap::TextPropertyToPSFontName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGL2PSUtilitiesWrap *wrapper = ObjectWrap::Unwrap<VtkGL2PSUtilitiesWrap>(info.Holder());
	vtkGL2PSUtilities *native = (vtkGL2PSUtilities *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkTextPropertyWrap::ptpl))->HasInstance(info[0]))
	{
		VtkTextPropertyWrap *a0 = ObjectWrap::Unwrap<VtkTextPropertyWrap>(info[0]->ToObject());
		char const * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->TextPropertyToPSFontName(
			(vtkTextProperty *) a0->native.GetPointer()
		);
		info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

