/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkUnstructuredGridAlgorithmWrap.h"
#include "vtkRectilinearGridToTetrahedraWrap.h"
#include "vtkObjectWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkRectilinearGridToTetrahedraWrap::ptpl;

VtkRectilinearGridToTetrahedraWrap::VtkRectilinearGridToTetrahedraWrap()
{ }

VtkRectilinearGridToTetrahedraWrap::VtkRectilinearGridToTetrahedraWrap(vtkSmartPointer<vtkRectilinearGridToTetrahedra> _native)
{ native = _native; }

VtkRectilinearGridToTetrahedraWrap::~VtkRectilinearGridToTetrahedraWrap()
{ }

void VtkRectilinearGridToTetrahedraWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkRectilinearGridToTetrahedra").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("RectilinearGridToTetrahedra").ToLocalChecked(), ConstructorGetter);
}

void VtkRectilinearGridToTetrahedraWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkRectilinearGridToTetrahedraWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkUnstructuredGridAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkUnstructuredGridAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkRectilinearGridToTetrahedraWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetRememberVoxelId", GetRememberVoxelId);
	Nan::SetPrototypeMethod(tpl, "getRememberVoxelId", GetRememberVoxelId);

	Nan::SetPrototypeMethod(tpl, "GetTetraPerCell", GetTetraPerCell);
	Nan::SetPrototypeMethod(tpl, "getTetraPerCell", GetTetraPerCell);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "RememberVoxelIdOff", RememberVoxelIdOff);
	Nan::SetPrototypeMethod(tpl, "rememberVoxelIdOff", RememberVoxelIdOff);

	Nan::SetPrototypeMethod(tpl, "RememberVoxelIdOn", RememberVoxelIdOn);
	Nan::SetPrototypeMethod(tpl, "rememberVoxelIdOn", RememberVoxelIdOn);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetInput", SetInput);
	Nan::SetPrototypeMethod(tpl, "setInput", SetInput);

	Nan::SetPrototypeMethod(tpl, "SetRememberVoxelId", SetRememberVoxelId);
	Nan::SetPrototypeMethod(tpl, "setRememberVoxelId", SetRememberVoxelId);

	Nan::SetPrototypeMethod(tpl, "SetTetraPerCell", SetTetraPerCell);
	Nan::SetPrototypeMethod(tpl, "setTetraPerCell", SetTetraPerCell);

	Nan::SetPrototypeMethod(tpl, "SetTetraPerCellTo12", SetTetraPerCellTo12);
	Nan::SetPrototypeMethod(tpl, "setTetraPerCellTo12", SetTetraPerCellTo12);

	Nan::SetPrototypeMethod(tpl, "SetTetraPerCellTo5", SetTetraPerCellTo5);
	Nan::SetPrototypeMethod(tpl, "setTetraPerCellTo5", SetTetraPerCellTo5);

	Nan::SetPrototypeMethod(tpl, "SetTetraPerCellTo5And12", SetTetraPerCellTo5And12);
	Nan::SetPrototypeMethod(tpl, "setTetraPerCellTo5And12", SetTetraPerCellTo5And12);

	Nan::SetPrototypeMethod(tpl, "SetTetraPerCellTo6", SetTetraPerCellTo6);
	Nan::SetPrototypeMethod(tpl, "setTetraPerCellTo6", SetTetraPerCellTo6);

#ifdef VTK_NODE_PLUS_VTKRECTILINEARGRIDTOTETRAHEDRAWRAP_INITPTPL
	VTK_NODE_PLUS_VTKRECTILINEARGRIDTOTETRAHEDRAWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkRectilinearGridToTetrahedraWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkRectilinearGridToTetrahedra> native = vtkSmartPointer<vtkRectilinearGridToTetrahedra>::New();
		VtkRectilinearGridToTetrahedraWrap* obj = new VtkRectilinearGridToTetrahedraWrap(native);
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

void VtkRectilinearGridToTetrahedraWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRectilinearGridToTetrahedraWrap *wrapper = ObjectWrap::Unwrap<VtkRectilinearGridToTetrahedraWrap>(info.Holder());
	vtkRectilinearGridToTetrahedra *native = (vtkRectilinearGridToTetrahedra *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkRectilinearGridToTetrahedraWrap::GetRememberVoxelId(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRectilinearGridToTetrahedraWrap *wrapper = ObjectWrap::Unwrap<VtkRectilinearGridToTetrahedraWrap>(info.Holder());
	vtkRectilinearGridToTetrahedra *native = (vtkRectilinearGridToTetrahedra *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRememberVoxelId();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkRectilinearGridToTetrahedraWrap::GetTetraPerCell(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRectilinearGridToTetrahedraWrap *wrapper = ObjectWrap::Unwrap<VtkRectilinearGridToTetrahedraWrap>(info.Holder());
	vtkRectilinearGridToTetrahedra *native = (vtkRectilinearGridToTetrahedra *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTetraPerCell();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkRectilinearGridToTetrahedraWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRectilinearGridToTetrahedraWrap *wrapper = ObjectWrap::Unwrap<VtkRectilinearGridToTetrahedraWrap>(info.Holder());
	vtkRectilinearGridToTetrahedra *native = (vtkRectilinearGridToTetrahedra *)wrapper->native.GetPointer();
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

void VtkRectilinearGridToTetrahedraWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRectilinearGridToTetrahedraWrap *wrapper = ObjectWrap::Unwrap<VtkRectilinearGridToTetrahedraWrap>(info.Holder());
	vtkRectilinearGridToTetrahedra *native = (vtkRectilinearGridToTetrahedra *)wrapper->native.GetPointer();
	vtkRectilinearGridToTetrahedra * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkRectilinearGridToTetrahedraWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkRectilinearGridToTetrahedraWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkRectilinearGridToTetrahedraWrap *w = new VtkRectilinearGridToTetrahedraWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkRectilinearGridToTetrahedraWrap::RememberVoxelIdOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRectilinearGridToTetrahedraWrap *wrapper = ObjectWrap::Unwrap<VtkRectilinearGridToTetrahedraWrap>(info.Holder());
	vtkRectilinearGridToTetrahedra *native = (vtkRectilinearGridToTetrahedra *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->RememberVoxelIdOff();
}

void VtkRectilinearGridToTetrahedraWrap::RememberVoxelIdOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRectilinearGridToTetrahedraWrap *wrapper = ObjectWrap::Unwrap<VtkRectilinearGridToTetrahedraWrap>(info.Holder());
	vtkRectilinearGridToTetrahedra *native = (vtkRectilinearGridToTetrahedra *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->RememberVoxelIdOn();
}

void VtkRectilinearGridToTetrahedraWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRectilinearGridToTetrahedraWrap *wrapper = ObjectWrap::Unwrap<VtkRectilinearGridToTetrahedraWrap>(info.Holder());
	vtkRectilinearGridToTetrahedra *native = (vtkRectilinearGridToTetrahedra *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkRectilinearGridToTetrahedra * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkRectilinearGridToTetrahedraWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkRectilinearGridToTetrahedraWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkRectilinearGridToTetrahedraWrap *w = new VtkRectilinearGridToTetrahedraWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkRectilinearGridToTetrahedraWrap::SetInput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRectilinearGridToTetrahedraWrap *wrapper = ObjectWrap::Unwrap<VtkRectilinearGridToTetrahedraWrap>(info.Holder());
	vtkRectilinearGridToTetrahedra *native = (vtkRectilinearGridToTetrahedra *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		if(info.Length() > 1 && info[1]->IsFloat64Array())
		{
			v8::Local<v8::Float64Array>a1(v8::Local<v8::Float64Array>::Cast(info[1]->ToObject()));
			if( a1->Length() < 3 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

			if(info.Length() > 2 && info[2]->IsNumber())
			{
								if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->SetInput(
					(double *)(a0->Buffer()->GetContents().Data()),
					(double *)(a1->Buffer()->GetContents().Data()),
					info[2]->NumberValue()
				);
				return;
			}
		}
		else if(info.Length() > 1 && info[1]->IsArray())
		{
			v8::Local<v8::Array>a1(v8::Local<v8::Array>::Cast(info[1]->ToObject()));
			double b1[3];
			if( a1->Length() < 3 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

			for( i = 0; i < 3; i++ )
			{
				if( !a1->Get(i)->IsNumber() )
				{
					Nan::ThrowError("Array contents invalid.");
					return;
				}
				b1[i] = a1->Get(i)->NumberValue();
			}
			if(info.Length() > 2 && info[2]->IsNumber())
			{
								if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->SetInput(
					(double *)(a0->Buffer()->GetContents().Data()),
					b1,
					info[2]->NumberValue()
				);
				return;
			}
		}
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		double b0[3];
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 3; i++ )
		{
			if( !a0->Get(i)->IsNumber() )
			{
				Nan::ThrowError("Array contents invalid.");
				return;
			}
			b0[i] = a0->Get(i)->NumberValue();
		}
		if(info.Length() > 1 && info[1]->IsArray())
		{
			v8::Local<v8::Array>a1(v8::Local<v8::Array>::Cast(info[1]->ToObject()));
			double b1[3];
			if( a1->Length() < 3 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

			for( i = 0; i < 3; i++ )
			{
				if( !a1->Get(i)->IsNumber() )
				{
					Nan::ThrowError("Array contents invalid.");
					return;
				}
				b1[i] = a1->Get(i)->NumberValue();
			}
			if(info.Length() > 2 && info[2]->IsNumber())
			{
								if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->SetInput(
					b0,
					b1,
					info[2]->NumberValue()
				);
				return;
			}
		}
		else if(info.Length() > 1 && info[1]->IsFloat64Array())
		{
			v8::Local<v8::Float64Array>a1(v8::Local<v8::Float64Array>::Cast(info[1]->ToObject()));
			if( a1->Length() < 3 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

			if(info.Length() > 2 && info[2]->IsNumber())
			{
								if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->SetInput(
					b0,
					(double *)(a1->Buffer()->GetContents().Data()),
					info[2]->NumberValue()
				);
				return;
			}
		}
	}
	else if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				if(info.Length() > 3 && info[3]->IsNumber())
				{
					if(info.Length() > 4 && info[4]->IsNumber())
					{
						if(info.Length() > 5 && info[5]->IsNumber())
						{
							if(info.Length() > 6 && info[6]->IsNumber())
							{
																if(info.Length() != 7)
								{
									Nan::ThrowError("Too many parameters.");
									return;
								}
								native->SetInput(
									info[0]->NumberValue(),
									info[1]->NumberValue(),
									info[2]->NumberValue(),
									info[3]->NumberValue(),
									info[4]->NumberValue(),
									info[5]->NumberValue(),
									info[6]->NumberValue()
								);
								return;
							}
						}
					}
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkRectilinearGridToTetrahedraWrap::SetRememberVoxelId(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRectilinearGridToTetrahedraWrap *wrapper = ObjectWrap::Unwrap<VtkRectilinearGridToTetrahedraWrap>(info.Holder());
	vtkRectilinearGridToTetrahedra *native = (vtkRectilinearGridToTetrahedra *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetRememberVoxelId(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkRectilinearGridToTetrahedraWrap::SetTetraPerCell(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRectilinearGridToTetrahedraWrap *wrapper = ObjectWrap::Unwrap<VtkRectilinearGridToTetrahedraWrap>(info.Holder());
	vtkRectilinearGridToTetrahedra *native = (vtkRectilinearGridToTetrahedra *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTetraPerCell(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkRectilinearGridToTetrahedraWrap::SetTetraPerCellTo12(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRectilinearGridToTetrahedraWrap *wrapper = ObjectWrap::Unwrap<VtkRectilinearGridToTetrahedraWrap>(info.Holder());
	vtkRectilinearGridToTetrahedra *native = (vtkRectilinearGridToTetrahedra *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetTetraPerCellTo12();
}

void VtkRectilinearGridToTetrahedraWrap::SetTetraPerCellTo5(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRectilinearGridToTetrahedraWrap *wrapper = ObjectWrap::Unwrap<VtkRectilinearGridToTetrahedraWrap>(info.Holder());
	vtkRectilinearGridToTetrahedra *native = (vtkRectilinearGridToTetrahedra *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetTetraPerCellTo5();
}

void VtkRectilinearGridToTetrahedraWrap::SetTetraPerCellTo5And12(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRectilinearGridToTetrahedraWrap *wrapper = ObjectWrap::Unwrap<VtkRectilinearGridToTetrahedraWrap>(info.Holder());
	vtkRectilinearGridToTetrahedra *native = (vtkRectilinearGridToTetrahedra *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetTetraPerCellTo5And12();
}

void VtkRectilinearGridToTetrahedraWrap::SetTetraPerCellTo6(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRectilinearGridToTetrahedraWrap *wrapper = ObjectWrap::Unwrap<VtkRectilinearGridToTetrahedraWrap>(info.Holder());
	vtkRectilinearGridToTetrahedra *native = (vtkRectilinearGridToTetrahedra *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetTetraPerCellTo6();
}

